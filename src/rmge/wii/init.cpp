#include "init.h"
#include <grrlib.h>
#include <wiiuse/wpad.h>

bool WII::init() {

    GRRLIB_Init();
    WPAD_Init();
}