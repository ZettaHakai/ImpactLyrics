#include "scenario.h"
#include "common.h"

// At the top of Impactlyrics.c
volatile s32* D_801C77D8_1C8398 = (s32*)0x801C77D8;
s16 scenario_text_0074[] = { CTR_NEWWINDOW, CTR_ENDLINE };

// ===== Scenario Text Blocks =====
static s16 scenario_text_0000[] = { CTR_BEGIN, CTR_ENDLINE };
static s16 scenario_text_0004[] = { PCT_SPACE, CTR_NEWLINE, CTR_ENDLINE };
static s16 scenario_text_000C[] = { PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,CTR_ENDLINE }; //dash
static s16 scenario_text_0100[] = { PCT_SPACE,CHR_T,CHR_h,CHR_e,PCT_SPACE,CHR_B,CHR_u,CHR_r,CHR_n,CHR_i,CHR_n,CHR_g,PCT_SPACE,CHR_S,CHR_u,CHR_n,CTR_NEWLINE,CTR_ENDLINE }; //sun
static s16 scenario_text_0108[] = { PCT_SPACE,CHR_S,CHR_h,CHR_i,CHR_n,CHR_e,CHR_s,PCT_SPACE,CHR_O,CHR_n,PCT_SPACE,CHR_M,CHR_y,PCT_SPACE,CHR_B,CHR_a,CHR_c,CHR_k,CTR_ENDLINE }; //shines
static s16 scenario_text_0110[] = { PCT_SPACE,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0118[] = { PCT_SPACE,CHR_T,CHR_r,CHR_a,CHR_n,CHR_s,CHR_m,CHR_i,CHR_s,CHR_s,CHR_i,CHR_o,CHR_n,PCT_SPACE,CHR_E,CHR_n,CHR_g,CHR_a,CHR_g,CHR_e,CHR_d,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0120[] = { PCT_SPACE,CHR_T,CHR_h,CHR_e,PCT_SPACE,CHR_M,CHR_a,CHR_c,CHR_h,CHR_i,CHR_n,CHR_e,PCT_SPACE,CHR_G,CHR_r,CHR_o,CHR_a,CHR_n,CHR_s,PCT_SPACE,CHR_T,CHR_o,PCT_SPACE,CHR_L,CHR_i,CHR_f,CHR_e,CTR_ENDLINE };
static s16 scenario_text_0128[] = { PCT_SPACE,CHR_I,PCT_SPACE,CHR_A,CHR_m,PCT_SPACE,CHR_A,PCT_SPACE,CHR_M,CHR_a,CHR_c,CHR_h,CHR_i,CHR_n,CHR_e,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0130[] = { PCT_SPACE,CHR_I,PCT_SPACE,CHR_A,CHR_m,PCT_SPACE,CHR_A,CHR_n,PCT_SPACE,CHR_I,CHR_r,CHR_o,CHR_n,PCT_SPACE,CHR_M,CHR_a,CHR_n,PCT_SPACE,CHR_H,CHR_E,CHR_Y,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0138[] = { PCT_SPACE,CHR_R,CHR_e,CHR_l,CHR_e,CHR_a,CHR_s,CHR_e,PCT_SPACE,CHR_Y,CHR_o,CHR_u,PCT_SPACE,CHR_S,CHR_t,CHR_e,CHR_e,CHR_l,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0140[] = { PCT_SPACE,CHR_S,CHR_p,CHR_i,CHR_r,CHR_i,CHR_t,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0148[] = { PCT_SPACE,CHR_L,CHR_e,CHR_t,PCT_APOSTROPHE,CHR_s,PCT_SPACE,CHR_G,CHR_o,PCT_EXCLAMATION,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0150[] = { PCT_SPACE,CHR_B,CHR_r,CHR_e,CHR_a,CHR_k,CHR_d,CHR_o,CHR_w,CHR_n,PCT_EXCLAMATION,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0158[] = { PCT_SPACE,CHR_B,CHR_l,CHR_o,CHR_w,PCT_SPACE,CHR_A,CHR_w,CHR_a,CHR_y,PCT_SPACE,CHR_T,CHR_h,CHR_e,PCT_SPACE,CHR_B,CHR_a,CHR_d,PCT_SPACE,CHR_G,CHR_u,CHR_y,CHR_s,PCT_EXCLAMATION,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0160[] = { PCT_SPACE,CHR_K,CHR_i,CHR_l,CHR_l,CHR_i,CHR_n,CHR_g,PCT_SPACE,CHR_M,CHR_o,CHR_v,CHR_e,PCT_COMMA,PCT_SPACE,CHR_F,CHR_u,CHR_l,CHR_l,PCT_SPACE,CHR_P,CHR_o,CHR_w,CHR_e,CHR_r,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0168[] = { PCT_SPACE,NUM_1,NUM_0,NUM_0,PCT_SPACE,CHR_P,CHR_u,CHR_n,CHR_c,CHR_h,PCT_SPACE,CHR_B,CHR_a,CHR_r,CHR_r,CHR_a,CHR_g,CHR_e,PCT_EXCLAMATION,CTR_NEWLINE,CTR_ENDLINE };
static s16 scenario_text_0170[] = { PCT_SPACE,CHR_I,PCT_SPACE,CHR_A,CHR_m,PCT_SPACE,CHR_G,CHR_o,CHR_r,CHR_g,CHR_e,CHR_o,CHR_u,CHR_s,PCT_EXCLAMATION,PCT_SPACE,CHR_A,CHR_h,PCT_COMMA,PCT_SPACE,CHR_I,CHR_M,CHR_P,CHR_A,CHR_C,CHR_T,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0178[] = { PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,CTR_ENDLINE };
static s16 scenario_text_0180[] = { CTR_END, CTR_ENDLINE };

// ===== Scenario Code =====
s32 scenario_code_impact_redub[];

s32 scenario_code_impact_redub[] = {

        // Window setup
        STW,         0x801c77d8,      WTS, 0x64, //text speed 
        STW, (s32)&D_801C7758_1C8358, WTS, 0x20,  // X
        STW, (s32)&D_801C775C_1C835C, WTS, 0xAA,  // Y
        STW, (s32)&D_801C7768_1C8368, WTS, 0xB,   // Window style

        // Begin text
        TXT, (s32)&scenario_text_0000,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x15C, ESR, (s32)&func_8003F460_40060,
        STW, (s32)&D_801C77D8_1C8398, WTS, 0x64,
        STW, (s32)&D_801C7798_1C8398, WTS, 0x1,

        // Opening lyrics
        TXT, (s32)&scenario_text_0004,
        TXT, (s32)&scenario_text_000C,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x20, ESR, (s32)&func_8003F460_40060,

        // The Burning Sun / Shines On My Back
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0100,
        TXT, (s32)&scenario_text_0108,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x77, ESR, (s32)&func_8003F460_40060,

        // Transmission Engaged / Machine Groans
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0118,
        TXT, (s32)&scenario_text_0120,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x7F, ESR, (s32)&func_8003F460_40060,

        // I Am A Machine / I Am An Iron Man
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0128,
        TXT, (s32)&scenario_text_0130,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x3B, ESR, (s32)&func_8003F460_40060,

        // Release Your Steel Spirit!
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0138,
        TXT, (s32)&scenario_text_0140,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x70, ESR, (s32)&func_8003F460_40060,

        // Let's Go!
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0148,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x30, ESR, (s32)&func_8003F460_40060,

        // Breakdown!
        TXT, (s32)&scenario_text_0074,
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0150,
        STW, (s32)&D_801C7740_1C8340, WTS, 0x30, ESR, (s32)&func_8003F460_40060,

        // After Breakdown: Blow Away The Bad Guys! //too short
        TXT, (s32)&scenario_text_0074, // new window
        TXT, (s32)&scenario_text_0110,
        TXT, (s32)&scenario_text_0158, // Blow Away The Bad Guys!
        STW, (s32)&D_801C7740_1C8340, WTS, 0x50, ESR, (s32)&func_8003F460_40060,

        // NEW WINDOW: Killing Move, Full Power!
         TXT, (s32)&scenario_text_0074, // new window
         TXT, (s32)&scenario_text_0110,
         TXT, (s32)&scenario_text_0160,
         STW, (s32)&D_801C7740_1C8340, WTS, 0x40, ESR, (s32)&func_8003F460_40060,

        // NEW WINDOW: 100 Punch Barrage!
         TXT, (s32)&scenario_text_0074, // new window
         TXT, (s32)&scenario_text_0110,
         TXT, (s32)&scenario_text_0168,
         STW, (s32)&D_801C7740_1C8340, WTS, 0x50, ESR, (s32)&func_8003F460_40060, // slightly longer delay

         // NEW WINDOW: I am Gorgeous! Ah, IMPACT!
         TXT, (s32)&scenario_text_0074, // new window
         TXT, (s32)&scenario_text_0110,
         TXT, (s32)&scenario_text_0170,
         STW, (s32)&D_801C7740_1C8340, WTS, 0x9F, ESR, (s32)&func_8003F460_40060, // slightly slower

         // Dash! Dash! Dash!
         TXT, (s32)&scenario_text_0074, // new window
         TXT, (s32)&scenario_text_0110,
         TXT, (s32)&scenario_text_0178,
         STW, (s32)&D_801C7740_1C8340, WTS, 0x56, ESR, (s32)&func_8003F460_40060,


        // End
        TXT, (s32)&scenario_text_0180,
        END,
    };
