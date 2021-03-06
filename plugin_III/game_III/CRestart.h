/*
    Plugin-SDK (Grand Theft Auto) header file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#pragma once

#include "plbase\PluginBase_III.h"
#include "CVector.h"

class CRestart {
public:
    // variables
    static CVector *HospitalRestartPoints; // [8]
    static float &HospitalRestartHeadings; // [8]
    static short &NumberOfHospitalRestarts;
    static bool &bFadeInAfterNextDeath;

    static CVector *PoliceRestartPoints;   // [8]
    static float &PoliceRestartHeadings;   // [8]
    static short &NumberOfPoliceRestarts;
    static bool &bFadeInAfterNextArrest;

    static CVector *OverridePosition;
    static float &OverrideHeading;
    static bool &bOverrideRestart;
    static char &OverrideHospitalLevel;
    static char &OverridePoliceStationLevel;

    // functions
    static void Initialise();
    static void AddHospitalRestartPoint(CVector const& point, float angle);
    static void AddPoliceRestartPoint(CVector const& point, float angle);
    static void FindClosestHospitalRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle);
    static void FindClosestPoliceRestartPoint(CVector const& point, CVector* storedPoint, float* storedAngle);
    static void OverrideNextRestart(CVector const& point, float angle);
    static void CancelOverrideRestart();
    static void SaveAllRestartPoints(unsigned char* bufferPointer, unsigned int* structSize);
    static void LoadAllRestartPoints(unsigned char* bufferPointer, unsigned int structSize);
};
