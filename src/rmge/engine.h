#pragma once

#include <stdlib.h>
#include <string.h>
#include <malloc.h>
#include <math.h>

#include <cstdint>
typedef uint32_t u32;

class RMGE {
    public:
        void init();
        u32 InputScan(int pad);
        void Render();

    typedef struct Vector2 {
        float x;
        float y;
    } Vector2;

    Vector2 leftStick;
    Vector2 rightStick;

    RMGE();

};

