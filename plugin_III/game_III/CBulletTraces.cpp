/*
    Plugin-SDK (Grand Theft Auto) source file
    Authors: GTA Community. See more here
    https://github.com/DK22Pac/plugin-sdk
    Do not delete this comment block. Respect others' work!
*/
#include "CBulletTraces.h"

unsigned int MAX_NUM_BULLETTRACES = 16;

CBulletTrace *CBulletTraces::aTraces = (CBulletTrace *)0x72B1B8;

// Converted from cdecl void CBulletTraces::Update(void) 0x519240 
void CBulletTraces::Update() {
    plugin::Call<0x519240>();
}

// Converted from cdecl void CBulletTraces::Render(void) 0x518F20 
void CBulletTraces::Render() {
    plugin::Call<0x518F20>();
}

// Converted from cdecl void CBulletTraces::Init(void) 0x518DE0 
void CBulletTraces::Init() {
    plugin::Call<0x518DE0>();
}

// Converted from cdecl void CBulletTraces::AddTrace(CVector *origin, CVector *target) 0x518E90
void CBulletTraces::AddTrace(CVector* origin, CVector* target) {
    plugin::Call<0x518E90, CVector*, CVector*>(origin, target);
}
