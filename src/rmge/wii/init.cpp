#include "init.h"
#include <grrlib.h>
#include <wiiuse/wpad.h>

int WII::init() {

    GRRLIB_Init();
    WPAD_Init();
    
    return 0;
}