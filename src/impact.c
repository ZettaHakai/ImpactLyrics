#include "scenario.h"
#include "common.h"
#include "recomputils.h"
#include "modding.h"
#include "recompconfig.h"

extern s32 scenario_code_impact_og[];
extern s32 scenario_code_impact_redub[];
extern s32 scenario_code_impact_removed[];
extern s32 scenario_code_impact_rama[];
extern s32 scenario_code_impact_goi[];
#define IMPACT_SCENARIO_ID 775  // scenario being replaced

// Helper function to choose which C file pointer to use
s32* get_selected_impact_lyrics(void) {
    unsigned long version = recomp_get_config_u32("impact_lyrics_version");
    

    switch (version)
    {
    case 0: return scenario_code_impact_og;
    case 1: return scenario_code_impact_rama;
    case 2: return scenario_code_impact_goi;
    case 3: return scenario_code_impact_redub;
    case 4: return scenario_code_impact_removed;
    default: return scenario_code_impact_og;
    }
}

// ---------------------------
// Replace scenario function
// ---------------------------
void replace_scenario(s32 scenario_id, s32* scenario_code, s16 scenario_file_id) {
    D_800779A0_785A0[scenario_id] = scenario_code;
    D_80078608_79208[scenario_id] = scenario_file_id;
}

// ---------------------------
// Hook to Replace Scenario 775
// ---------------------------
RECOMP_HOOK("func_8003F1D8_3FDD8")
void main_hook() {
    s32* selected_lyrics = get_selected_impact_lyrics();
    replace_scenario(IMPACT_SCENARIO_ID, selected_lyrics, 0);
}