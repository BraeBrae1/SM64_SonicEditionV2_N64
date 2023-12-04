#ifndef INTRO_HEADER_H
#define INTRO_HEADER_H

#include "types.h"

// geo
extern const GeoLayout intro_geo_0002D0[];
extern const GeoLayout intro_geo_mario_head_regular[];
extern const GeoLayout intro_geo_mario_head_dizzy[];
extern const GeoLayout intro_geo_000414[];

// leveldata
extern const Gfx intro_seg7_dl_0700B3A0[];
extern const Gfx intro_seg7_dl_0700C6A0[];
extern const f32 intro_seg7_table_0700C790[];
extern const f32 intro_seg7_table_0700C880[];
extern Lights1 titlesonic_title_logo_layer1_lights;
extern u8 titlesonic_title_logo_ci8[];
extern u8 titlesonic_title_logo_ci8_pal_rgba16[];
extern Vtx titlesonic_Text_mesh_vtx_0[3127];
extern Gfx titlesonic_Text_mesh_tri_0[];
extern Gfx mat_titlesonic_title_logo_layer1[];
extern Gfx mat_revert_titlesonic_title_logo_layer1[];
extern Gfx titlesonic_Text_mesh[];


// script
extern const LevelScript level_intro_splash_screen[];
extern const LevelScript level_intro_mario_head_regular[];
extern const LevelScript level_intro_mario_head_dizzy[];
extern const LevelScript level_intro_entry_4[];
extern const LevelScript script_intro_L1[];
extern const LevelScript script_intro_L2[];
extern const LevelScript script_intro_L3[];
extern const LevelScript script_intro_L4[];
extern const LevelScript script_intro_L5[];

// new titlescreen
#endif
