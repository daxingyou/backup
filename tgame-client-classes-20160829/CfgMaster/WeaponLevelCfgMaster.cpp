#include "WeaponLevelCfgMaster.h"
#include <set>

using std::set;

int CWeaponLevelCfgMaster::ValidateCfg()const
{
	int iRet = 0;


	set<unsigned int> stItemIDSet;

	for(int iIdx = 0; iIdx < m_stCfg.weaponlevelcfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.weaponlevelcfg(iIdx).level();
		if(stItemIDSet.insert(uiCfgID).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id重复
		}
		//to add other validate check, such as skill etc.
	}
	return iRet;
}

int CWeaponLevelCfgMaster::SetCfg()
{
	int iRet = 0;
    m_iMaxLv = 0;
	for(int iIdx = 0; iIdx < m_stCfg.weaponlevelcfg_size(); iIdx++)
	{
		unsigned int uiCfgID = m_stCfg.weaponlevelcfg(iIdx).level();
        if(uiCfgID > (unsigned int)m_iMaxLv) {
            m_iMaxLv = uiCfgID;
        }
		if(m_stID2IDX.insert(make_pair(uiCfgID, iIdx)).second == false)
		{
			CV_ERROR(("%s, cfgid = %u is dup cfg id !",
				__PRETTY_FUNCTION__, uiCfgID));
			return -1;//id重复
		}
	}

	return iRet;
}

WeaponLevelCfg* CWeaponLevelCfgMaster::GetWeaponLevelCfgByID(const unsigned int uiCfgID)
{
	map<unsigned int, int>::const_iterator it = m_stID2IDX.find(uiCfgID);

	if(it == m_stID2IDX.end())
	{
		CV_ERROR(("%s, can not find cfgid = %u item", __PRETTY_FUNCTION__, uiCfgID));
		return NULL; //找不到该物品配置
	}

	return m_stCfg.mutable_weaponlevelcfg(it->second);
}


const int CWeaponLevelCfgMaster::GetMaxLevel() {
    return m_iMaxLv;
}

