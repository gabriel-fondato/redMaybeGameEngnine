
#ifndef PLATFORM_H
#define PLATFORM_H

#include "engine.h"
#include "ngc/init.h"
#include "wii/init.h"


bool RMGE::init() {
    #if defined(__gamecube__) 
        
        NGC ngc; // yeah i like oop
        ngc.init(); //tell the ngc object to init 
        #define PLATFORM_GAMECUBE
    #elif defined(__wii__)
        
        WII wii; //same thing
        wii.init();
        #define PLATAFORM_WII
    #endif
}

#endif