#ifndef FightEndlessShowPanel_h__
#define FightEndlessShowPanel_h__

#include "BasePanel.h"
#include "CSInfiniteMsg.pb.h"

using namespace vmsg;

class HBox;

class CFightEndlessShowPanel : public BasePanel
{
public:
	enum  {
		ENDLESS_MAX_ITEM = 6,
	};
public:
	CFightEndlessShowPanel();
	virtual ~CFightEndlessShowPanel();

	CREATE_FUNC(CFightEndlessShowPanel);

	// override
	virtual bool init();
	virtual void open();
	virtual void close();

	void showResult(const CSInfiniteEndRsp& stRsp);
protected:
private:
	 void touchEventHandler(CCObject *pSender, TouchEventType type);
	 void HandleBaoxiangEffEvent(CCArmature * armature, MovementEventType type, const char * name);
	 void HandleCellEffEvent(CCArmature * armature, MovementEventType type, const char * name);
	 void showNextElmt(); //չʾ��һ����Ʒ
	 const std::string getLastCellAniName(const bool isLoopAni);
	 const std::string getColorString(const int iColor);

private:
	UIButton *m_pDoOKBtn; //close btn
	HBox *m_pCellHBox;

	CCArmature* m_pBaoxiangAni; //������Ч
	CCArmature* m_pCurCellAni; //������Ч

	std::vector<vmsg::CSAwardElement> m_stElmtDataLst;
};

#endif // FightEndlessShowPanel_h__