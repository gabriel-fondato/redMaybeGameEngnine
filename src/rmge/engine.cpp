
#ifndef PLATFORM_H
#define PLATFORM_H

#include "engine.h"
#include "ngc/init.h"
#include "wii/init.h"



#if defined(__gamecube__) 
    void RMGE::init() {
        NGC ngc;                                    //yeah i like oop
        ngc.init();                                 //tell the ngc object to init 
        #define PLATFORM_GAMECUBE
    }
    u32 RMGE::InputScan(int pad) {                  //i belive the pad int is the controller port
                                                    //this fuction scans inputs and updates them and converts the analogsticks fuctions to vectors :)
        PAD_ScanPads();
        u32 paddown = PAD_ButtonsDown(pad);

        RMGE::leftStick.x = PAD_StickX(pad);
        RMGE::leftStick.y = PAD_StickY(pad);

        RMGE::rightStick.x = PAD_SubStickX(pad);
        RMGE::rightStick.y = PAD_SubStickY(pad);

        return paddown;                             //i dont know what paddown actually is but we can know if there is a button pressed with it
    }
    void RMGE::Render() {GRRLIB_Render();}          //renders
    RMGE::RMGE() {}

#elif defined(__wii__)
    void RMGE::init() {
        WII wii;                                    //same thing
        wii.init();
        #define PLATAFORM_WII
    }
#endif



#endif