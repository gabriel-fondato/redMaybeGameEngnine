
#ifndef PLATFORM_H
#define PLATFORM_H

#include "engine.h"
#include "ngc/init.h"


bool RMGE::init() {
    #if defined(__gamecube__) 
        
        NGC ngc; // yeah i like oop
        ngc.init(); //tell the ngc object to init 
        #define PLATFORM_GAMECUBE
    #elif defined(__wii__)
        
        NGC ngc; //same thing
        ngc.init();
        #define PLATAFORM_WII
    #endif
}

#endif