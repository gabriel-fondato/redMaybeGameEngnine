#include "rmge/engine.h"
#include <gccore.h>
#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>


int main(void) {
    RMGE rmge; //instantiate the engine
    
    rmge.init(1); //tell rmge that i want to initialize gamecube (check rmge/engine.h for what numbers are wich consoles)
    return 0;
}