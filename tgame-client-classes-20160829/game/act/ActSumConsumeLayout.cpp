#include "ActSumConsumeLayout.h"
#include "defines.h"

#include "ClientSvrMsg.pb.h"
#include "CSCouponMsg.pb.h"

#include "CfgMaster/ActCfgMaster.h"

#include "basic/ToolUtils.h"
#include "basic/TimeEx.h"
#include "ActControl.h"
#include "TextHelper.h"
#include "vlib/base/CVBaseDefine.h"

#include "GUI/CCScrollView/CCScrollView.h"
#include "ActRewardItem.h"
#include "SumConsumeActCfgMaster.h"
#include "UserObj.h"
#include "shop/ShopControl.h"
#include "shop/RmbShopPanel.h"

using namespace cocos2d::ui;

#define CELL_PREFIX_NAME "cell_"
#define COL_CELL_CNT 6

ActSumConsumeLayout::ActSumConsumeLayout()
{
}

ActSumConsumeLayout::~ActSumConsumeLayout()
{

}

ActSumConsumeLayout* ActSumConsumeLayout::create() {
	ActSumConsumeLayout *pRet = new ActSumConsumeLayout();

	if (pRet != NULL && pRet->init()) {
		pRet->autorelease();
	}
	else {
		CC_SAFE_DELETE(pRet);
	}

	return pRet;
}

bool ActSumConsumeLayout::init() {
	bool bRet = false;

	do {
		CC_BREAK_IF(!BaseLayout::init());

		initUI();

		bRet = true;
	} while (0);

	return bRet;
}

void ActSumConsumeLayout::updateInfo(const vmsg::CSCouponActStatusItem& info) {

	if (info.ByteSize() > 0) {

		if (info.has_sumconsumepkgstatus())
		{
			mSumConsumePkgStatus = info.sumconsumepkgstatus();

			//1.
			std::string _last;
			formatActLastTime(mSumConsumePkgStatus.starttime(), mSumConsumePkgStatus.stoptime(), _last);
			mActLastTime->setText(_last.c_str());
			//CCLog("ActFightGeekLayout last Time:%s", _last.c_str());

			//2.
			char szTime[64] = { 0, };
			snprintf(szTime, 64, TextStr(TEXT_ACT_SUM_CONSUME), mSumConsumePkgStatus.consume());
			mCurCharge->setText(szTime);
			
			//3.
			mRewardTableView->setTouchEnabled(true);
			mRewardTableView->reloadData();
			if(mOffsetPoint.y<=0)
			{
				mRewardTableView->setContentOffset(mOffsetPoint);
			}
		}
	}
}

void ActSumConsumeLayout::initUI() {

	initLayoutFromJsonFile("ui_v2/ActSumConsumeLayoutUI.ExportJson");
	addChild(m_pRootLayout);

	mActLastTime = dynamic_cast<UILabel*>(m_pRootLayout->getChildByName("act_time_val_txt"));
	mCurCharge = dynamic_cast<UILabel*>(m_pRootLayout->getChildByName("cur_desc_text"));
	mRewardLayout = dynamic_cast<UILayout*>(m_pRootLayout->getChildByName("reward_bg"));
	Widget* pGetBtn = dynamic_cast<Widget*>(m_pRootLayout->getChildByName("get_btn_0"));
	pGetBtn->addTouchEventListener(this,toucheventselector(ActSumConsumeLayout::touchEventHandler));

	mRewardTableView = CCTableView::create(this, mRewardLayout->getContentSize());
	mRewardTableView->setDirection(kCCScrollViewDirectionVertical);
	mRewardTableView->setAnchorPoint(CCPointZero);
	mRewardTableView->setPosition(ccp(5, 5));
	mRewardTableView->setDelegate(this);
	mRewardTableView->setScaleY(1.0f);
	mRewardTableView->setTouchPriority(-1);
	mRewardTableView->setVerticalFillOrder(kCCTableViewFillTopDown);

	mRewardLayout->addNode(mRewardTableView);
	m_bUIInited = true;
}

void ActSumConsumeLayout::touchEventHandler(CCObject* pSender, TouchEventType type)
{
	if (type ==TOUCH_EVENT_ENDED )
	{
		Widget* pWidget = dynamic_cast<Widget*>(pSender);
		string pName = pWidget->getName();
		if (pName == "get_btn_0")
		{
			P_SHOP_CTRL->getRmbShopPanel()->open();
		}
	}
}

void ActSumConsumeLayout::formatActLastTime(unsigned int _start, unsigned int _end, std::string& _szTime)
{
	_szTime.clear();

	time_t _spanStart = (time_t)_start;
	time_t _spanEnd = (time_t)_end;

	CVTime spanStart(_spanStart);
	CVTime spanEnd(_spanEnd);
	
	char szTime[64] = { 0, };
	snprintf(szTime, 64, TextStr(TEXT_ACT_TIME_LAST_FORMAT), 
			spanStart.GetYear(), spanStart.GetMonth(), spanStart.GetDay(),
			spanEnd.GetYear(), spanEnd.GetMonth(), spanEnd.GetDay());
	_szTime = szTime;
}

CCSize ActSumConsumeLayout::cellSizeForTable(CCTableView *table){
	return CCSizeMake(table->getContentSize().width - 40, 120);
}

unsigned int ActSumConsumeLayout::numberOfCellsInTableView(CCTableView *table)
{
	return SumConsumeAct_CFG_MASTER->getSumConsumeAwardTypeNum();
}

void ActSumConsumeLayout::tableCellTouched(CCTableView* table, CCTableViewCell* cell)
{
	RewardItem *pItem = dynamic_cast<RewardItem*>(cell->getChildByTag(LIST_ITEM_TAG));
	if (NULL == pItem) {
		return;
	}
	mOffsetPoint = mRewardTableView->getContentOffset();
	if(pItem->onTouch(m_stGlobalTouchPt))
	{
		mRewardTableView->setTouchEnabled(false);
	}
}

CCTableViewCell* ActSumConsumeLayout::tableCellAtIndex(CCTableView *table, unsigned int idx)
{
	CCTableViewCell* cell = table->dequeueCell();
	RewardItem *pRewardItem = NULL;

	if (!cell){
		cell = new CCTableViewCell();
		cell->autorelease();

		pRewardItem = RewardItem::create(vmsg::ACT_LIST_TYPE::SUM_CONSUME_ACT);

		cell->addChild(pRewardItem, 0, LIST_ITEM_TAG);
	}
	else{
		pRewardItem = dynamic_cast<RewardItem*>(cell->getChildByTag(LIST_ITEM_TAG));
	}

	const SumConsumeActCfg* pChargeLevel = SumConsumeAct_CFG_MASTER->getSumConsumeActCfg(idx + 1);
	if (!pChargeLevel)
		return cell;

	unsigned int _state = mSumConsumePkgStatus.status();
	bool _b_state = mSumConsumePkgStatus.consume() >= pChargeLevel->totalconsume() ? true : false;
	int _i_state = CV_BIT_TEST(_state, idx);// 0 δ��ȡ

	pRewardItem->setInfo(pChargeLevel->level(), pChargeLevel->totalconsume(), TEXT_ACT_NEED_GOLD, _b_state, _i_state);
	return cell;
}