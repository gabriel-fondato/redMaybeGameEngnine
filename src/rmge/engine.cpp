
#ifndef PLATFORM_H
#define PLATFORM_H

#include "engine.h"
#include "ngc/init.h"
#include "wii/init.h"



#if defined(__gamecube__) 
    void RMGE::init() {
        NGC ngc; // yeah i like oop
        ngc.init(); //tell the ngc object to init 
        #define PLATFORM_GAMECUBE
    }
    u32 RMGE::InputScan() {
        PAD_ScanPads();
        u32 paddown = PAD_ButtonsDown(0);

        return paddown;
    }
    void RMGE::Render() {GRRLIB_Render();}
    RMGE::RMGE() {}
#elif defined(__wii__)
    void RMGE::init() {
        WII wii; //same thing
        wii.init();
        #define PLATAFORM_WII
    }
#endif



#endif