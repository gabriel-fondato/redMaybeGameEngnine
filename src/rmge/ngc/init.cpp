#include "init.h"
#define DEFAULT_FIFO_SIZE (256*1024)

GXRModeObj	*screenMode;
static void	*frameBuffer;

bool NGC::init() {

    VIDEO_Init();
	
	screenMode = VIDEO_GetPreferredMode(NULL);

	PAD_Init();
	frameBuffer	= MEM_K0_TO_K1(SYS_AllocateFramebuffer(screenMode));

	VIDEO_Configure(screenMode);
	VIDEO_SetNextFramebuffer(frameBuffer);
	VIDEO_SetBlack(FALSE);
	VIDEO_Flush();


    void *gp_fifo = NULL;                     //
    gp_fifo = memalign(32,DEFAULT_FIFO_SIZE); //    initialize the fifo wich is like a thing that makes the cpu comunicate with the gp
    memset(gp_fifo,0,DEFAULT_FIFO_SIZE);      //

    GX_Init(gp_fifo,DEFAULT_FIFO_SIZE);       //    tell libogc to initialize the gp comunication with my fifo

    GXColor background = {0,0,0,0xff};        //    set the background color so it does not create that hall of mirrors effect
    GX_SetCopyClear(background, 0x00ffffff);  //

    GX_InvVtxCache();                         //    invalidate and clear the vertex descriptor
    GX_ClearVtxDesc();                        //

    GX_SetVtxDesc(GX_VA_POS, GX_DIRECT);      //
    GX_SetVtxDesc(GX_VA_NRM, GX_DIRECT);      //    tell the gp how i will describe the vertexes
    GX_SetVtxDesc(GX_VA_TEX0, GX_DIRECT);     //

    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_POS, GX_POS_XYZ, GX_F32, 0); //
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_NRM, GX_NRM_XYZ, GX_F32, 0); //  tell the gp how i will describe the triangles
    GX_SetVtxAttrFmt(GX_VTXFMT0, GX_VA_TEX0, GX_TEX_ST, GX_F32, 0); //
    while(1){
    GX_Begin(GX_TRIANGLES,GX_VTXFMT0,3);
        //GX_Position3f32(1.0f,0,0);
    GX_End();
    }
}