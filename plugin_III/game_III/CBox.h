/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_III.h"
#include "CVector.h"

class CBox {
public:
    CVector m_vecMin;
    CVector m_vecMax;
};

VALIDATE_SIZE(CBox, 0x18);