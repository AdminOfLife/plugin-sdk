/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase/PluginBase_SA.h"

class PLUGIN_API CompressedVector {
public:
    signed short x;
    signed short y;
    signed short z;
};

VALIDATE_SIZE(CompressedVector, 6);
