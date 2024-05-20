#include "init.h"



void drawCube(u32 col[3]) {
            GX_Position3f32(-1.0f,1.0f,-1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(-1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(1.0f,1.0f,-1.0f);
            GX_Color1u32(col[0]);

            GX_Position3f32(-1.0f,1.0f,1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(-1.0f,-1.0f,1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(1.0f,-1.0f,1.0f);
            GX_Color1u32(col[0]);
            GX_Position3f32(1.0f,1.0f,1.0f);
            GX_Color1u32(col[0]);

            GX_Position3f32(-1.0f,1.0f,1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(1.0f,1.0f,1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(1.0f,1.0f,-1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(-1.0f,1.0f,-1.0f);
            GX_Color1u32(col[1]);

            GX_Position3f32(-1.0f,-1.0f,1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(1.0f,-1.0f,1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[1]);
            GX_Position3f32(-1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[1]);

            GX_Position3f32(-1.0f,1.0f,1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(-1.0f,1.0f,-1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(-1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(-1.0f,-1.0f,1.0f);
            GX_Color1u32(col[2]);

            GX_Position3f32(1.0f,1.0f,1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(1.0f,1.0f,-1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(1.0f,-1.0f,-1.0f);
            GX_Color1u32(col[2]);
            GX_Position3f32(1.0f,-1.0f,1.0f);
            GX_Color1u32(col[2]);
}