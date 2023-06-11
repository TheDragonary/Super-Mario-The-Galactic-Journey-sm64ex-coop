#include <ultra64.h>
#include "sm64.h"
#include "behavior_data.h"
#include "model_ids.h"
#include "seq_ids.h"
#include "dialog_ids.h"
#include "segment_symbols.h"
#include "level_commands.h"
#include "game/level_update.h"
#include "levels/scripts.h"
#include "actors/common1.h"
#include "make_const_nonconst.h"

#include "areas/1/custom.model.inc.h"
#include "levels/sl/header.h"
extern u8 _sl_segment_ESegmentRomStart[]; 
extern u8 _sl_segment_ESegmentRomEnd[];
#include "levels/wf/header.h"
const LevelScript level_sl_entry[] = {
INIT_LEVEL(),
LOAD_MIO0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd),
LOAD_RAW(0x1A, _wfSegmentRomStart, _wfSegmentRomEnd),
LOAD_RAW(0x0E, _sl_segment_ESegmentRomStart, _sl_segment_ESegmentRomEnd),
LOAD_MIO0(0xA,_water_skybox_mio0SegmentRomStart,_water_skybox_mio0SegmentRomEnd),
LOAD_MIO0(8,_common0_mio0SegmentRomStart,_common0_mio0SegmentRomEnd),
LOAD_RAW(15,_common0_geoSegmentRomStart,_common0_geoSegmentRomEnd),
LOAD_MIO0(5,_group11_mio0SegmentRomStart,_group11_mio0SegmentRomEnd),
LOAD_RAW(12,_group11_geoSegmentRomStart,_group11_geoSegmentRomEnd),
LOAD_MIO0(6,_group14_mio0SegmentRomStart,_group14_mio0SegmentRomEnd),
LOAD_RAW(13,_group14_geoSegmentRomStart,_group14_geoSegmentRomEnd),
ALLOC_LEVEL_POOL(),
MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE,                   bubbly_tree_geo),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                wf_geo_0007E0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                wf_geo_000820),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                wf_geo_000860),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                wf_geo_000878),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                wf_geo_000890),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                wf_geo_0008A8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09,                wf_geo_0008E8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                wf_geo_000900),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                wf_geo_000940),
    LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE,                    wf_geo_000AE0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                wf_geo_000958),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F,                wf_geo_0009A0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM,             wf_geo_0009B8),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11,                wf_geo_0009D0),
    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12,                wf_geo_0009E8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP,                    wf_geo_000A00),
    LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP,                    wf_geo_000A40),
    LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM,      wf_geo_000A58),
    LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM,              wf_geo_000A98),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART,          wf_geo_000AB0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE,               wf_geo_000AC8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM,       wf_geo_000AF8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM,          wf_geo_000B10),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED,   wf_geo_000B38),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT,          wf_geo_000B78),
    LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT,           wf_geo_000B90),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD,                wf_geo_000BA8),
    LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR,                    wf_geo_000BE0),
    LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED,         wf_geo_000BC8),
LOAD_MODEL_FROM_GEO(22, warp_pipe_geo),
LOAD_MODEL_FROM_GEO(23, bubbly_tree_geo),
LOAD_MODEL_FROM_GEO(24, spiky_tree_geo),
LOAD_MODEL_FROM_GEO(25, snow_tree_geo),
LOAD_MODEL_FROM_GEO(27, palm_tree_geo),
LOAD_MODEL_FROM_GEO(31, metal_door_geo),
LOAD_MODEL_FROM_GEO(32, hazy_maze_door_geo),
LOAD_MODEL_FROM_GEO(34, castle_door_0_star_geo),
LOAD_MODEL_FROM_GEO(35, castle_door_1_star_geo),
LOAD_MODEL_FROM_GEO(36, castle_door_3_stars_geo),
LOAD_MODEL_FROM_GEO(37, key_door_geo),
LOAD_MODEL_FROM_GEO(38, castle_door_geo),
// LOAD_MODEL_FROM_DL(132,0x08025f08,4),
// LOAD_MODEL_FROM_DL(158,0x0302c8a0,4),
// LOAD_MODEL_FROM_DL(159,0x0302bcd0,4),
// LOAD_MODEL_FROM_DL(161,0x0301cb00,4),
// LOAD_MODEL_FROM_DL(164,0x04032a18,4),
// LOAD_MODEL_FROM_DL(201,0x080048e0,4),
// LOAD_MODEL_FROM_DL(218,0x08024bb8,4),
JUMP_LINK(script_func_global_1),
JUMP_LINK(script_func_global_12),
JUMP_LINK(script_func_global_15),
JUMP_LINK(local_area_sl_1_),
FREE_LEVEL_POOL(),
MARIO_POS(1,135,-6558,0,6464),
CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
CLEAR_LEVEL(),
SLEEP_BEFORE_EXIT(/*frames*/ 1),
EXIT(),
};
const LevelScript local_area_sl_1_[] = {
AREA(1,Geo_sl_1_0x1a41700),
TERRAIN(col_sl_1_0xe052030),
SET_BACKGROUND_MUSIC(0,39),
TERRAIN_TYPE(0),
JUMP_LINK(local_objects_sl_1_),
JUMP_LINK(local_warps_sl_1_),
END_AREA(),
RETURN()
};
const LevelScript local_objects_sl_1_[] = {
OBJECT_WITH_ACTS(0,9948,1515,-16979,0,0,0,0xa0000, bhvSpinAirborneWarp,31),
OBJECT_WITH_ACTS(0,583,2683,-5387,0,-154,0,0xb0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1680,3835,-5523,0,-153,0,0xc0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,-6612,1024,-3351,0,107,0,0xd0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(0,1980,768,6618,0,-151,0,0xe0000, bhvFadingWarp,31),
OBJECT_WITH_ACTS(195,14688,473,-12083,0,-90,0,0x2a0000, bhvBobombBuddy,63),
OBJECT_WITH_ACTS(102,7552,1898,-7448,0,0,0,0x0, bhvChainChomp,63),
OBJECT_WITH_ACTS(217,7552,1794,-7448,0,0,0,0x0, bhvPushableMetalBox,63),
OBJECT_WITH_ACTS(0,9583,666,-12760,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,3385,629,-14896,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,15990,1898,-3958,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(0,-104,473,-14063,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,-417,629,-7031,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(89,2031,37,-12917,0,-153,0,0x0, bhvBubba,63),
OBJECT_WITH_ACTS(0,-1510,1048,-14531,0,0,0,0x0, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,-3021,1843,-14792,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(123,-3750,1896,-12552,0,28,0,0x200000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(137,-2396,2993,-10729,0,0,0,0x0, bhvExclamationBox,1),
OBJECT_WITH_ACTS(121,7865,4115,-4740,0,180,0,0x0, bhvStar,63),
OBJECT_WITH_ACTS(152,-1094,2917,-9792,0,0,0,0x0, bhvShrink_Platform_MOP,63),
OBJECT_WITH_ACTS(152,-781,3177,-9896,0,0,0,0x0, bhvShrink_Platform_MOP,63),
OBJECT_WITH_ACTS(152,-469,3514,-9896,0,0,0,0x0, bhvShrink_Platform_MOP,63),
OBJECT_WITH_ACTS(152,-156,3754,-9740,0,0,0,0x0, bhvShrink_Platform_MOP,63),
OBJECT_WITH_ACTS(0,2760,337,-1146,0,0,0,0x10000, bhvGoombaTripletSpawner,63),
OBJECT_WITH_ACTS(84,2813,629,5313,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(223,208,473,5781,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(192,-7656,473,4479,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(84,-9844,629,4896,0,0,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(192,-11823,473,5156,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(223,-13906,473,9323,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(223,-15000,473,11250,0,0,0,0x0, bhvChuckya,63),
OBJECT_WITH_ACTS(192,-17604,1131,15260,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(84,-16823,2030,15938,0,-135,0,0x0, bhvEnemyLakitu,63),
OBJECT_WITH_ACTS(0,-15833,3243,14583,0,0,0,0x20000, bhvCoinFormation,63),
OBJECT_WITH_ACTS(121,-15833,3553,14583,0,180,0,0x1000000, bhvStar,63),
OBJECT_WITH_ACTS(192,13281,473,-6615,0,0,0,0x0, bhvGoomba,63),
OBJECT_WITH_ACTS(192,13333,473,-3646,0,0,0,0x10000, bhvGoomba,63),
OBJECT_WITH_ACTS(121,12031,942,-3906,0,67,0,0x2000000, bhvStar,63),
OBJECT_WITH_ACTS(137,8125,2158,-4219,0,0,0,0x20000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(119,17917,473,-12031,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,-1823,473,-12396,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,15885,1898,-3854,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,3073,1687,-19167,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,2760,337,-1146,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,12188,473,-3021,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,5938,1898,-2969,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(119,1667,-31,-14948,0,0,0,0x0, bhvRedCoin,63),
OBJECT_WITH_ACTS(0,7969,2158,-5104,0,0,0,0x3000000, bhvHiddenRedCoinStar,63),
OBJECT_WITH_ACTS(42,16250,473,469,0,34,0,0x0, bhvFlipswitch_Panel_MOP,63),
OBJECT_WITH_ACTS(0,15210,2263,-1144,0,0,0,0x4000000, bhvFlipswitch_Panel_StarSpawn_MOP,63),
OBJECT_WITH_ACTS(123,15677,681,729,0,37,0,0x300000, bhvNoteblock_MOP,63),
OBJECT_WITH_ACTS(137,3542,786,-19219,0,-41,0,0x70000, bhvExclamationBox,63),
OBJECT_WITH_ACTS(192,4740,473,-15104,0,-41,0,0x10000, bhvGoomba,63),
OBJECT_WITH_ACTS(242,-1667,473,0,0,-54,0,0x0, bhvSwitchblock_Switch_MOP,63),
OBJECT_WITH_ACTS(241,3617,-120,-9509,0,0,0,0x2020000, bhvSwitchblock_MOP,63),
OBJECT_WITH_ACTS(121,3617,-120,-9509,0,180,0,0x5000000, bhvStar,63),
OBJECT_WITH_ACTS(0,1719,802,-14896,0,90,0,0x0, bhvCoinFormation,63),
OBJECT_WITH_ACTS(137,11719,2211,-4323,0,0,0,0x60000, bhvExclamationBox,63),
RETURN()
};
const LevelScript local_warps_sl_1_[] = {
WARP_NODE(10,9,1,10,0),
WARP_NODE(11,9,1,12,0),
WARP_NODE(12,9,1,11,0),
WARP_NODE(13,9,1,14,0),
WARP_NODE(14,9,1,13,0),
WARP_NODE(240,26,1,240,0),
WARP_NODE(241,26,1,241,0),
WARP_NODE(0,9,1,10,0),
WARP_NODE(1,9,1,10,0),
WARP_NODE(2,9,1,10,0),
WARP_NODE(3,9,1,10,0),
WARP_NODE(4,9,1,10,0),
WARP_NODE(5,9,1,10,0),
WARP_NODE(6,9,1,10,0),
RETURN()
};