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

#include "levels/ddd/header.h"
#include "levels/bbh/header.h"

extern u8 _ddd_segment_ESegmentRomStart[];
extern u8 _ddd_segment_ESegmentRomEnd[];

const LevelScript level_ddd_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _bbh_segment_7SegmentRomStart, _bbh_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _bbhSegmentRomStart, _bbhSegmentRomEnd),
	LOAD_RAW(0x0E, _ddd_segment_ESegmentRomStart, _ddd_segment_ESegmentRomEnd),
	LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom47578816_skybox_mio0SegmentRomStart, _SkyboxCustom47578816_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd),
	LOAD_RAW(12, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd),
	LOAD_MIO0(6, _group17_mio0SegmentRomStart, _group17_mio0SegmentRomEnd),
	LOAD_RAW(13, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_BBH_HAUNTED_DOOR,           haunted_door_geo),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_STAIRCASE_STEP,         geo_bbh_0005B0),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TILTING_FLOOR_PLATFORM, geo_bbh_0005C8),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM,      geo_bbh_0005E0),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_TUMBLING_PLATFORM_PART, geo_bbh_0005F8),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MOVING_BOOKSHELF,       geo_bbh_000610),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MESH_ELEVATOR,          geo_bbh_000628),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_MERRY_GO_ROUND,         geo_bbh_000640),
	LOAD_MODEL_FROM_GEO(MODEL_BBH_WOODEN_TOMB,            geo_bbh_000658),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
	LOAD_MODEL_FROM_GEO(29,  haunted_door_geo),
	LOAD_MODEL_FROM_GEO(31,  metal_door_geo),
	LOAD_MODEL_FROM_GEO(32,  hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34,  castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35,  castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36,  castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37,  key_door_geo),
	LOAD_MODEL_FROM_GEO(38,  castle_door_geo),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_2),
	JUMP_LINK(script_func_global_18),
	JUMP_LINK(local_area_ddd_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_ddd_1_[] = {
	AREA(1, Geo_ddd_1_0x2c21700),
	TERRAIN(col_ddd_1_0xe035228),
	SET_BACKGROUND_MUSIC(0, 38),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_ddd_1_),
	JUMP_LINK(local_warps_ddd_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ddd_1_[] = {
	OBJECT_WITH_ACTS(0, 1667, -6158, 3020, 0, -90, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(22, 4229, 2990, -4450, 0, -90, 0, 0xb0000,  bhvWarpPipe, 31),
	OBJECT_WITH_ACTS(22, -2383, -7115, 8592, 0, 197, 0, 0xc0000,  bhvWarpPipe, 63),
	OBJECT_WITH_ACTS(0, -3643, 7406, -5903, 0, 58, 0, 0xd0000,  bhvFadingWarp, 1),
	OBJECT_WITH_ACTS(0, -1145, 3723, -9007, 0, -109, 0, 0xe0000,  bhvFadingWarp, 1),
	OBJECT_WITH_ACTS(0, -3281, -7446, 2292, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(206, -3854, -7292, 3073, 0, 101, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(188, -2760, -7446, 1719, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(101, -2604, -7446, 7448, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(223, 1302, 2990, -7240, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(101, -2188, 6341, -5990, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(192, -3125, 5442, -7188, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(101, -3646, 4852, -6458, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(121, -3162, 4635, -6146, 0, -44, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(241, -9531, -6615, -833, 0, -58, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -8802, -6615, -1406, 0, -58, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -7916, -6615, -1719, 0, -58, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -6823, -6615, -1979, 0, -58, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(123, -6302, -6407, -2240, 0, -58, 0, 0x200000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(137, -937, -5833, -2812, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(137, -1719, -5365, -8333, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(137, -5365, -5825, -2760, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(137, -6641, -5252, -6875, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(137, -677, -5677, -7604, 0, 0, 0, 0x0,  bhvHiddenStarTrigger, 63),
	OBJECT_WITH_ACTS(0, -6637, -5104, -6875, 0, 0, 0, 0x1000000,  bhvHiddenStar, 63),
	OBJECT_WITH_ACTS(0, -4427, -5922, -2708, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(101, -938, -5922, -5000, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(206, -1719, -5766, -2708, 0, -90, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(0, -1302, -5922, -6927, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(101, -3750, -5922, -7083, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(101, -4792, -5922, -7083, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(206, -5729, -5766, -7188, 0, 90, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(101, -6667, -7446, 3646, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(89, -8073, -7446, 2865, 0, 0, 0, 0x0,  bhvHeaveHo, 63),
	OBJECT_WITH_ACTS(123, -2760, -7290, 3021, 0, 0, 0, 0x600000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 833, -5500, 781, 0, 116, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(101, 2604, -5168, 0, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(123, 3229, -5104, 1406, 0, 0, 0, 0x600000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(0, 3355, -3880, 2812, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(89, 5625, -3880, 4375, 0, 0, 0, 0x0,  bhvHeaveHo, 63),
	OBJECT_WITH_ACTS(206, 7813, -3203, 4427, 0, -73, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(101, 9583, -2776, 3958, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(121, 10437, -2005, 3468, 0, -90, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(119, -2292, -7115, 8906, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -2344, -5365, 3792, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4531, 2990, -4427, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -2135, 2990, -417, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 312, 2990, -4531, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -7240, -7186, 3229, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 1698, 2990, -7165, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -10000, -6719, 885, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, -2500, -7197, 1823, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(137, -2776, -5380, 2135, 0, 0, 0, 0x0,  bhvExclamationBox, 16),
	OBJECT_WITH_ACTS(121, -3490, -5729, -5260, 0, -90, 0, 0x4000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 1510, 2990, -4531, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(206, 1094, 3146, 1771, 0, -93, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(101, 2812, 4282, 2344, 0, 0, 0, 0x0,  bhvScuttlebug, 63),
	OBJECT_WITH_ACTS(192, 3333, 5617, 4792, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, -1250, 6891, 5729, 0, 0, 0, 0x10000,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(206, -2135, 7099, 4479, 0, 29, 0, 0x0,  bhvSnufit, 63),
	OBJECT_WITH_ACTS(121, -2694, 10319, 4603, 0, 90, 0, 0x5000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, -417, 3385, -8698, 0, -114, 0, 0x40000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(116, -1146, 3723, -9010, 0, -18, 0, 0x0,  bhvOneCoin, 63),
	RETURN()
};

const LevelScript local_warps_ddd_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 23, 1, 12, 0),
	WARP_NODE(12, 23, 1, 11, 0),
	WARP_NODE(13, 23, 1, 14, 0),
	WARP_NODE(14, 23, 1, 13, 0),
	WARP_NODE(240, 26, 1, 240, 0),
	WARP_NODE(241, 26, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};