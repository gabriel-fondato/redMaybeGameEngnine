#include "init.h"


bool NGC::init() {
float a = 0;
    const u32 col[3] = {0xFFFFFFFF, 0xAAAAAAFF, 0x666666FF};
    int cubeZ = 0;

    GRRLIB_Init();
    PAD_Init();



    GRRLIB_Settings.antialias = true;

    GRRLIB_SetBackgroundColour(0x00, 0x00, 0x00, 0xFF);
    GRRLIB_Camera3dSettings(0.0f,0.0f,13.0f, 0,1,0, 0,0,0);

    while(1) {
        GRRLIB_2dMode();
        PAD_ScanPads();
        if(PAD_ButtonsDown(0) & PAD_BUTTON_START) exit(0);
        if(PAD_ButtonsHeld(0) & PAD_BUTTON_A) cubeZ++;
        if(PAD_ButtonsHeld(0) & PAD_BUTTON_B) cubeZ--;

        GRRLIB_3dMode(0.1,1000,45,0,0);
        GRRLIB_ObjectView(0,0,cubeZ, a,a*2,a*3,1,1,1);
        GX_Begin(GX_QUADS, GX_VTXFMT0, 24);
            GRRLIB_DrawCube(100,false,col[1]);
        GX_End();
        a+=0.5f;

        

        GRRLIB_Render();
    }

    GRRLIB_Exit(); // Be a good boy, clear the memory allocated by GRRLIB

    exit(0);
}
