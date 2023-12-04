#ifndef SEQ_IDS_H
#define SEQ_IDS_H

// Sometimes a sequence id is represented as one of the below ids (the base id),
// optionally OR'd with SEQ_VARIATION.
#define SEQ_BASE_ID 0x7f
#define SEQ_VARIATION 0x80

enum SeqId {
    SEQ_SOUND_PLAYER,                 // 0x00
    SEQ_EVENT_CUTSCENE_COLLECT_STAR,  // 0x01 newstarget
    SEQ_MENU_TITLE_SCREEN,            // 0x02 credits_sonictheme
    SEQ_LEVEL_GRASS,                  // 0x03 new_ttm
    SEQ_LEVEL_INSIDE_CASTLE,          // 0x04 new_castle_music
    SEQ_LEVEL_WATER,                  // 0x05 new_ddd
    SEQ_LEVEL_HOT,                    // 0x06 new_lll
    SEQ_LEVEL_BOSS_KOOPA,             // 0x07 new_wdw
    SEQ_LEVEL_SNOW,                   // 0x08 new_ccm
    SEQ_LEVEL_SLIDE,                  // 0x09 new_sl2
    SEQ_LEVEL_SPOOKY,                 // 0x0A new_bbh
    SEQ_EVENT_PIRANHA_PLANT,          // 0x0B in-use
    SEQ_LEVEL_UNDERGROUND,            // 0x0C new_hmc
    SEQ_MENU_STAR_SELECT,             // 0x0D in-use
    SEQ_EVENT_POWERUP,                // 0x0E new_pss
    SEQ_EVENT_METAL_CAP,              // 0x0F chromegadget (midi)
    SEQ_EVENT_KOOPA_MESSAGE,          // 0x10 in-use
    SEQ_LEVEL_KOOPA_ROAD,             // 0x11 eggmanstage3_eggmanland
    SEQ_EVENT_HIGH_SCORE,             // 0x12 in-use
    SEQ_EVENT_MERRY_GO_ROUND,         // 0x13 new_bbh2
    SEQ_EVENT_RACE,                   // 0x14 in-use
    SEQ_EVENT_CUTSCENE_STAR_SPAWN,    // 0x15 new_star_spawn
    SEQ_EVENT_BOSS,                   // 0x16 new_boss
    SEQ_EVENT_CUTSCENE_COLLECT_KEY,   // 0x17 in-use
    SEQ_EVENT_ENDLESS_STAIRS,         // 0x18 in-use
    SEQ_LEVEL_BOSS_KOOPA_FINAL,       // 0x19 eggman3_finalegg
    SEQ_EVENT_CUTSCENE_CREDITS,       // 0x1A eggman1_eggmantheme
    SEQ_EVENT_SOLVE_PUZZLE,           // 0x1B in-use
    SEQ_EVENT_TOAD_MESSAGE,           // 0x1C in-use
    SEQ_EVENT_PEACH_MESSAGE,          // 0x1D new_lll2
    SEQ_EVENT_CUTSCENE_INTRO,         // 0x1E in-use
    SEQ_EVENT_CUTSCENE_VICTORY,       // 0x1F in-use
    SEQ_EVENT_CUTSCENE_ENDING,        // 0x20 tikal_theme
    SEQ_MENU_FILE_SELECT,             // 0x21 in-use
    SEQ_EVENT_CUTSCENE_LAKITU,        // 0x22 (not in JP)
    SEQ_DROWN,			              // 0x23 in-use (midi)
    SEQ_SUPER,                        // 0x24 in-use (midi)
    SEQ_EMERALD,                      // 0x25 in-use (midi)
    SEQ_NEWBOB,                       // 0x26 new_bob
    SEQ_VSMETAL,                      // 0x27 race_vsmetal
    SEQ_NEWWF,                        // 0x28 new_wf
    SEQ_NEWJRB,                       // 0x29 new_jrb
    SEQ_NEWTTC,                       // 0x2A new_ttc
    SEQ_NEWRR,                        // 0x2B new_rr
    SEQ_NEWTHI,                       // 0x2C new_thi
    SEQ_NEWSSL,                       // 0x2D new_ssl
    SEQ_NEWSSL2,                      // 0x2E new_ssl2
    SEQ_COUNT
};

#endif // SEQ_IDS_H
