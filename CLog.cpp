#include "CLog.h"

namespace lce
{

    lce::CFileLog CLog::m_oLog;
    uint8_t CLog::m_cLevel=15;
    bool CLog::m_bShowLine=false;
}
