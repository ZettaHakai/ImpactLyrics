#include "scenario.h"
#include "common.h"


// At the top
extern volatile s32* D_801C77D8_1C8398;
extern s16 scenario_text_0074[];

// ===== Scenario Text Blocks =====
static s16 scenario_text_0000[] = { CTR_BEGIN, CTR_ENDLINE };
static s16 scenario_text_0004[] = { PCT_SPACE, CTR_NEWLINE, CTR_ENDLINE };

// DADA! DAASSHU!
static s16 scenario_text_000C[] = { PCT_SPACE,CHR_D,CHR_a,PCT_SPACE,CHR_D,CHR_a,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_EXCLAMATION,CTR_ENDLINE };

// Moeru taiyou / se ni ukete
static s16 scenario_text_0100[] = { PCT_SPACE,CHR_M,CHR_o,CHR_e,CHR_r,CHR_u,PCT_SPACE,CHR_t,CHR_a,CHR_i,CHR_y,CHR_o,CHR_u,PCT_COMMA,CTR_ENDLINE };
static s16 scenario_text_0108[] = { PCT_SPACE,CHR_s,CHR_e,PCT_SPACE,CHR_n,CHR_i,PCT_SPACE,CHR_u,CHR_k,CHR_e,CHR_t,CHR_e,CTR_ENDLINE };

// Yukuzo hasshin / MASHIN ga unaru
static s16 scenario_text_0110[] = { PCT_SPACE,CHR_Y,CHR_u,CHR_k,CHR_u,CHR_z,CHR_o,PCT_SPACE,CHR_h,CHR_a,CHR_s,CHR_s,CHR_h,CHR_i,CHR_n,PCT_COMMA,CTR_ENDLINE };
static s16 scenario_text_0118[] = { PCT_SPACE,CHR_M,CHR_a,CHR_s,CHR_h,CHR_i,CHR_n,PCT_SPACE,CHR_g,CHR_a,CHR_u,CHR_n,CHR_a,CHR_r,CHR_u,CTR_ENDLINE };

// Ore wa kikai da tetsujin da / HEI!
static s16 scenario_text_0120[] = { PCT_SPACE,CHR_O,CHR_r,CHR_e,PCT_SPACE,CHR_w,CHR_a,PCT_SPACE,CHR_k,CHR_i,CHR_k,CHR_a,CHR_i,PCT_SPACE,CHR_d,CHR_a,PCT_SPACE,CHR_t,CHR_e,CHR_t,CHR_s,CHR_u,CHR_j,CHR_i,CHR_n,CHR_d,CHR_a,CTR_ENDLINE };
static s16 scenario_text_0128[] = { PCT_SPACE,PCT_LPAREN,CHR_H,CHR_E,CHR_Y,PCT_RPAREN,CTR_ENDLINE };

// Ima, tokihanate yo / Hagane no tamashii
static s16 scenario_text_0130[] = { PCT_SPACE,CHR_I,CHR_m,CHR_a,PCT_COMMA,PCT_SPACE,CHR_t,CHR_o,CHR_k,CHR_i,CHR_h,CHR_a,CHR_n,CHR_a,CHR_t,CHR_e,CHR_e,CHR_y,CHR_o,CTR_ENDLINE };
static s16 scenario_text_0138[] = { PCT_SPACE,CHR_h,CHR_a,CHR_g,CHR_a,CHR_n,CHR_e,PCT_SPACE,CHR_n,CHR_o,PCT_SPACE,CHR_t,CHR_a,CHR_m,CHR_a,CHR_s,CHR_h,CHR_i,CHR_i,CTR_ENDLINE };

// Iku zee!
static s16 scenario_text_0140[] = { PCT_SPACE,PCT_LPAREN,CHR_I,CHR_K,CHR_U,CHR_Z,CHR_E,PCT_EXCLAMATION,PCT_RPAREN,CTR_ENDLINE };

// Breakdown / Warui yatsura wo buchikowase
static s16 scenario_text_0148[] = { PCT_SPACE,CHR_B,CHR_R,CHR_E,CHR_A,CHR_K,CHR_D,CHR_O,CHR_W,CHR_N,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0150[] = { PCT_SPACE,CHR_W,CHR_a,CHR_r,CHR_u,CHR_i,PCT_SPACE,CHR_y,CHR_a,CHR_t,CHR_s,CHR_u,CHR_r,CHR_a,PCT_SPACE,CHR_w,CHR_o,PCT_SPACE,CHR_b,CHR_u,CHR_c,CHR_h,CHR_i,CHR_k,CHR_o,CHR_w,CHR_a,CHR_s,CHR_e,CTR_ENDLINE };

// Hissatsu / Genkai / PAWAA
static s16 scenario_text_0152[] = { PCT_SPACE,CHR_H,CHR_i,CHR_s,CHR_s,CHR_a,CHR_t,CHR_s,CHR_u,CTR_ENDLINE };
static s16 scenario_text_0154[] = { PCT_SPACE,CHR_H,CHR_i,CHR_s,CHR_s,CHR_a,CHR_t,CHR_s,CHR_u,CTR_ENDLINE };
static s16 scenario_text_0158[] = { PCT_SPACE,CHR_G,CHR_E,CHR_N,CHR_K,CHR_A,CHR_I,CTR_ENDLINE };
static s16 scenario_text_015C[] = { PCT_SPACE,CHR_P,CHR_O,CHR_W,CHR_E,CHR_R,CTR_ENDLINE };

// hyakuretsu PANCHI / Ore wa GORGEOUS
static s16 scenario_text_0160[] = { PCT_SPACE,PCT_SPACE,CHR_H,CHR_Y,CHR_A,CHR_K,CHR_U,CHR_T,CHR_E,CHR_T,CHR_S,CHR_U,PCT_SPACE,CHR_P,CHR_U,CHR_N,CHR_C,CHR_H,CTR_ENDLINE };
static s16 scenario_text_0168[] = { PCT_SPACE,CHR_O,CHR_r,CHR_e,PCT_SPACE,CHR_w,CHR_a,PCT_SPACE,CHR_G,CHR_O,CHR_R,CHR_G,CHR_E,CHR_O,CHR_U,CHR_S,CTR_ENDLINE };

// Aa, IMPAKUTO / DADA! DAASSHU!
static s16 scenario_text_0170[] = { PCT_SPACE,CHR_A,CHR_a,PCT_COMMA,PCT_SPACE,CHR_I,CHR_M,CHR_P,CHR_A,CHR_C,CHR_T,PCT_EXCLAMATION,CTR_ENDLINE };
static s16 scenario_text_0178[] = { PCT_SPACE,CHR_D,CHR_a,PCT_SPACE,CHR_D,CHR_a,PCT_SPACE,CHR_D,CHR_a,CHR_s,CHR_h,PCT_EXCLAMATION,CTR_ENDLINE };
// End
static s16 scenario_text_0180[] = { CTR_END, CTR_ENDLINE };

// ===== Scenario Code =====
s32 scenario_code_impact_rama[];

    // ===== Scenario Code =====
s32 scenario_code_impact_rama[] = {

    // Window setup
    STW,     0x801c77d8,          WTS, 0x64, //text speed. Sets to max. zoooooooom
    STW, (s32)&D_801C7758_1C8358, WTS, 0x20, //x
    STW, (s32)&D_801C775C_1C835C, WTS, 0xAA, //y
    STW, (s32)&D_801C7768_1C8368, WTS, 0xB, //style

    // Begin text
    TXT, (s32)&scenario_text_0000,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x15C, ESR, (s32)&func_8003F460_40060,
    STW, (s32)&D_801C77D8_1C8398, WTS, 0x64,
    STW, (s32)&D_801C7798_1C8398, WTS, 0x1,

    // Opening lyrics
    TXT, (s32)&scenario_text_0004,
    TXT, (s32)&scenario_text_000C,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x35, ESR, (s32)&func_8003F460_40060,

    // Window 1: Moeru taiyou / se ni ukete
    TXT, (s32)&scenario_text_0074,  // new window
    TXT, (s32)&scenario_text_0004,
    TXT, (s32)&scenario_text_0100,
    TXT, (s32)&scenario_text_0108,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x9E, ESR, (s32)&func_8003F460_40060,

    // Window 2: Yukuzo hasshin / MASHIN ga unaru
    TXT, (s32)&scenario_text_0074,
    TXT, (s32)&scenario_text_0004,
    TXT, (s32)&scenario_text_0110,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x5f, ESR, (s32)&func_8003F460_40060,

    // Window 2: Yukuzo hasshin / MASHIN ga unaru


    TXT, (s32)&scenario_text_0118,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x5f, ESR, (s32)&func_8003F460_40060,

    // Window Ore wa kikai da tetsujin da /
    TXT, (s32)&scenario_text_0074,
    TXT, (s32)&scenario_text_0004,
    TXT, (s32)&scenario_text_0120,
    STW, (s32)&D_801C7740_1C8340, WTS, 0x50, ESR, (s32)&func_8003F460_40060,

    // Window 3: HEI!
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0128,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x10, ESR, (s32)&func_8003F460_40060,


   // Window/ Ima, tokihanate yo 
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0130,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x50, ESR, (s32)&func_8003F460_40060,

   // Window Hagane no tamashii
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0138,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x52, ESR, (s32)&func_8003F460_40060,

   // ikuzee
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0140,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x22, ESR, (s32)&func_8003F460_40060,

   // Window 5: breakdown
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0148,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x40, ESR, (s32)&func_8003F460_40060,

   // Window 6: BOWAITSA
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0150,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x70, ESR, (s32)&func_8003F460_40060,

   //hishas
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0152,
   TXT, (s32)&scenario_text_0154,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x37, ESR, (s32)&func_8003F460_40060,

   // Window 7: genkai powa
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0158,
   TXT, (s32)&scenario_text_015C,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x31, ESR, (s32)&func_8003F460_40060,

   // Window 8: punchi
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0160,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x40, ESR, (s32)&func_8003F460_40060,

   // Window 9: gorgeous
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0168,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x50, ESR, (s32)&func_8003F460_40060,

   // Window 10:  Ah IMPACT!
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0170,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x8F, ESR, (s32)&func_8003F460_40060,
   //dash2
   TXT, (s32)&scenario_text_0074,
   TXT, (s32)&scenario_text_0004,
   TXT, (s32)&scenario_text_0178,
   STW, (s32)&D_801C7740_1C8340, WTS, 0x8F, ESR, (s32)&func_8003F460_40060,

   // End
   TXT, (s32)&scenario_text_0180,
   END,
};
