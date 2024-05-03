#include "engine.h"
#include "ngc/init.h"


bool RMGE::init(unsigned short int platform) {
    if(platform == 1) {
        NGC ngc; // yeah i like oop
        ngc.init(); //tell the ngc object to init 
    }
}