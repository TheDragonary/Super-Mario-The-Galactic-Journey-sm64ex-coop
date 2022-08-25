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

#include "levels/lll/header.h"
#include "levels/ssl/header.h"

extern u8 _lll_segment_ESegmentRomStart[];
extern u8 _lll_segment_ESegmentRomEnd[];

const LevelScript level_lll_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _ssl_segment_7SegmentRomStart, _ssl_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _sslSegmentRomStart, _sslSegmentRomEnd),
	LOAD_RAW(0x0E, _lll_segment_ESegmentRomStart, _lll_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _ssl_skybox_mio0SegmentRomStart, _ssl_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group5_mio0SegmentRomStart, _group5_mio0SegmentRomEnd),
	LOAD_RAW(12, _group5_geoSegmentRomStart, _group5_geoSegmentRomEnd),
	LOAD_MIO0(6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
	LOAD_RAW(13, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE,           palm_tree_geo),
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,       ssl_geo_0005C0),
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,       ssl_geo_0005D8),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_TOP,         ssl_geo_000618),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_GRINDEL,             ssl_geo_000734),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_SPINDEL,             ssl_geo_000764),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_MOVING_PYRAMID_WALL, ssl_geo_000794),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PYRAMID_ELEVATOR,    ssl_geo_0007AC),
	LOAD_MODEL_FROM_GEO(MODEL_SSL_TOX_BOX,             ssl_geo_000630),
	// Unspecified Models
	LOAD_MODEL_FROM_GEO(22,  warp_pipe_geo),
	LOAD_MODEL_FROM_GEO(23,  bubbly_tree_geo),
	LOAD_MODEL_FROM_GEO(24,  spiky_tree_geo),
	LOAD_MODEL_FROM_GEO(25,  snow_tree_geo),
	LOAD_MODEL_FROM_GEO(27,  palm_tree_geo),
	LOAD_MODEL_FROM_GEO(31,  metal_door_geo),
	LOAD_MODEL_FROM_GEO(32,  hazy_maze_door_geo),
	LOAD_MODEL_FROM_GEO(34,  castle_door_0_star_geo),
	LOAD_MODEL_FROM_GEO(35,  castle_door_1_star_geo),
	LOAD_MODEL_FROM_GEO(36,  castle_door_3_stars_geo),
	LOAD_MODEL_FROM_GEO(37,  key_door_geo),
	LOAD_MODEL_FROM_GEO(38,  castle_door_geo),
	// LOAD_MODEL_FROM_GEO(86, 0x05014630),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_6),
	JUMP_LINK(script_func_global_15),
	JUMP_LINK(local_area_lll_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_lll_1_[] = {
	AREA(1, Geo_lll_1_0x2ac1700),
	TERRAIN(col_lll_1_0xe058228),
	SET_BACKGROUND_MUSIC(0, 35),
	TERRAIN_TYPE(3),
	JUMP_LINK(local_objects_lll_1_),
	JUMP_LINK(local_warps_lll_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_lll_1_[] = {
	OBJECT_WITH_ACTS(0, 730, 17, -14583, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 5134, -5308, -1064, 0, 180, 0, 0xb0000,  bhvFadingWarp, 63),
	OBJECT_WITH_ACTS(0, 16875, -1590, 2240, 0, 0, 0, 0xc0000,  bhvFadingWarp, 3),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 573, -1664, -5938, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 1927, -1517, -7604, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(0, 1615, -1714, -1458, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(102, -2552, 1985, -1250, 0, 0, 0, 0x0,  bhvChainChomp, 63),
	OBJECT_WITH_ACTS(217, -2552, 1881, -1198, 0, 0, 0, 0x0,  bhvPushableMetalBox, 63),
	OBJECT_WITH_ACTS(0, -4792, 584, -6615, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(0, -4948, 584, -5313, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 5208, 476, 9010, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(123, 3177, -1714, 3698, 0, 17, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 7656, 580, 11198, 0, 71, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, -16146, -1777, 1719, 0, 0, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 11354, 1667, 12083, 0, 42, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 10208, 2544, 3229, 0, 40, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(223, 11823, 2544, 7865, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(223, 11042, 2544, 5469, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(0, 2917, -916, 5625, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(220, 6771, 632, 10833, 0, 0, 0, 0x10000,  bhvFlyGuy, 63),
	OBJECT_WITH_ACTS(0, 9479, 1472, 11042, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(188, 12708, 2805, 11771, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(0, 13021, 2805, 10625, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 12396, 2805, 10573, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(220, 8542, 3781, 3646, 0, 0, 0, 0x10000,  bhvFlyGuy, 63),
	OBJECT_WITH_ACTS(121, 8958, 4427, 5365, 0, -72, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(195, 1039, -1714, -10783, 0, -180, 0, 0x270000,  bhvBobombBuddy, 63),
	OBJECT_WITH_ACTS(212, 16875, -1486, 2240, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(192, 6510, -5687, -3490, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, 4375, -5687, -3385, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(194, 7760, -5635, -3490, 0, 0, 0, 0x0,  bhvHomingAmp, 63),
	OBJECT_WITH_ACTS(220, 6771, -5583, -4792, 0, 0, 0, 0x10000,  bhvFlyGuy, 63),
	OBJECT_WITH_ACTS(137, 2760, -5322, -2188, 0, 0, 0, 0x70000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(188, 6250, -5687, -5781, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(192, 4687, -5687, -6094, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, 3854, -5687, -5000, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(0, 6875, -5687, -1875, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 8073, -5687, -2292, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 4896, -5687, -6563, 0, 90, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(121, 8635, -5270, -1108, 0, 180, 0, 0x1000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, -7604, -1714, 4531, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(223, -9479, -1714, 5625, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(123, -17448, -1006, 1927, 0, 0, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(0, -16563, 232, 156, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(137, -11406, 1436, -1927, 0, 0, 0, 0x60000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(121, -12865, 2456, 104, 0, -90, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(119, -16198, 232, -690, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 3490, -1408, -5417, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 18073, -1714, 312, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -5937, 844, -6146, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 8125, -726, 4635, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 9844, 2322, 12760, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 9792, -1714, -3646, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -6927, -1714, -6406, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, 3698, -1297, -729, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(0, -6406, -1714, -625, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(0, -1615, -1714, 2031, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 1510, -1517, -7604, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 3438, -1714, -3229, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 12656, -1714, 1250, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 13490, -1714, 2969, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(87, -2656, 2558, -1302, 0, 0, 0, 0x4010000,  bhvKlepto, 16),
	OBJECT_WITH_ACTS(0, -2969, 1985, -1510, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(123, -4479, 1364, -2083, 0, 28, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(0, -1042, -1500, 7344, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -5573, 1131, 11042, 0, 0, 0, 0x5000000,  bhvEyerokBoss, 32),
	OBJECT_WITH_ACTS(0, -313, -450, 11458, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(0, -2448, -450, 12292, 0, 0, 0, 0x0,  bhvPokey, 63),
	OBJECT_WITH_ACTS(0, -1198, -450, 16458, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(54, -3750, -450, 16250, 0, 90, 0, 0x0,  bhvHorizontalGrindel, 63),
	OBJECT_WITH_ACTS(54, -4271, -450, 16979, 0, 90, 0, 0x0,  bhvHorizontalGrindel, 63),
	OBJECT_WITH_ACTS(120, -5781, 1008, 12552, 0, 0, 0, 0x0,  bhvRecoveryHeart, 63),
	OBJECT_WITH_ACTS(195, 5582, -1714, -1415, 0, -143, 0, 0x80000,  bhvBobombBuddy, 3),
	RETURN()
};

const LevelScript local_warps_lll_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 22, 1, 12, 0),
	WARP_NODE(12, 22, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
	WARP_NODE(240, 6, 1, 240, 0),
	WARP_NODE(241, 6, 1, 241, 0),
	WARP_NODE(0, 9, 1, 10, 0),
	WARP_NODE(1, 9, 1, 10, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 9, 1, 10, 0),
	RETURN()
};