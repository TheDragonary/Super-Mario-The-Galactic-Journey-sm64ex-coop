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

#include "levels/ttc/header.h"
#include "levels/lll/header.h"

extern u8 _ttc_segment_ESegmentRomStart[];
extern u8 _ttc_segment_ESegmentRomEnd[];

const LevelScript level_ttc_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
	LOAD_RAW(0x0E, _ttc_segment_ESegmentRomStart, _ttc_segment_ESegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom34602688_skybox_mio0SegmentRomStart, _SkyboxCustom34602688_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group11_mio0SegmentRomStart, _group11_mio0SegmentRomEnd),
	LOAD_RAW(12, _group11_geoSegmentRomStart, _group11_geoSegmentRomEnd),
	LOAD_MIO0(6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd),
	LOAD_RAW(13, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd),
	ALLOC_LEVEL_POOL(),
	MARIO(/*model*/ MODEL_MARIO, /*behParam*/ 0x00000001, /*beh*/ bhvMario),
	// Level Specific Models
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03,                  lll_geo_0009E0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04,                  lll_geo_0009F8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05,                  lll_geo_000A10),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06,                  lll_geo_000A28),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07,                  lll_geo_000A40),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08,                  lll_geo_000A60),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A,                  lll_geo_000A90),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0B,                  lll_geo_000AA8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C,                  lll_geo_000AC0),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0D,                  lll_geo_000AD8),
	    LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E,                  lll_geo_000AF0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_DRAWBRIDGE_PART,                lll_geo_000B20),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_BLOCK_FIRE_BARS,       lll_geo_000B38),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_RING,        lll_geo_000BB0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_RECTANGULAR_PLATFORM,   lll_geo_000BC8),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_SQUARE_PLATFORMS,       lll_geo_000BE0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_TILTING_SQUARE_PLATFORM,        lll_geo_000BF8),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_1,                 lll_geo_000C10),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_2,                 lll_geo_000C30),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_3,                 lll_geo_000C50),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_4,                 lll_geo_000C70),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_5,                 lll_geo_000C90),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_6,                 lll_geo_000CB0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_7,                 lll_geo_000CD0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_8,                 lll_geo_000CF0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_9,                 lll_geo_000D10),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_10,                lll_geo_000D30),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_11,                lll_geo_000D50),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_12,                lll_geo_000D70),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_13,                lll_geo_000D90),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_BOWSER_PIECE_14,                lll_geo_000DB0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_MOVING_OCTAGONAL_MESH_PLATFORM, lll_geo_000B08),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_SINKING_ROCK_BLOCK,             lll_geo_000DD0),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROLLING_LOG,                    lll_geo_000DE8),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_ROTATING_HEXAGONAL_PLATFORM,    lll_geo_000A78),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_WOOD_BRIDGE,                    lll_geo_000B50),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_WOOD_BRIDGE,              lll_geo_000B68),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_FALLING_PLATFORM,               lll_geo_000B80),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_LARGE_FALLING_PLATFORM,         lll_geo_000B98),
	    LOAD_MODEL_FROM_GEO(MODEL_LLL_VOLCANO_FALLING_TRAP,           lll_geo_000EA8),
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
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_12),
	JUMP_LINK(script_func_global_15),
	JUMP_LINK(local_area_ttc_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_ttc_1_[] = {
	AREA(1, Geo_ttc_1_0x1fc1700),
	TERRAIN(col_ttc_1_0xe083530),
	SET_BACKGROUND_MUSIC(0, 43),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_ttc_1_),
	JUMP_LINK(local_warps_ttc_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ttc_1_[] = {
	OBJECT_WITH_ACTS(0, 2075, -3555, -12745, 0, 0, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 583, 2683, -5387, 0, -154, 0, 0xb0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1680, 3835, -5523, 0, -153, 0, 0xc0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 2031, -4554, -6406, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(188, 2240, -4554, -10417, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(188, 1979, -4554, -9115, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(192, 9896, -4238, -6406, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(223, 11198, -3925, -5990, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(188, 8281, -4554, -5729, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(192, 8021, -4554, -3646, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(84, 11302, -3177, -3281, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(103, 11823, -3613, -4583, 0, 180, 0, 0x0,  bhvSmallWhomp, 63),
	OBJECT_WITH_ACTS(0, 10312, -2998, 3021, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 9688, -2998, 6042, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 13542, -1792, 4479, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(223, 10208, 542, 9271, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(192, 9271, 2263, 13229, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(188, 9479, 2940, 10313, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(220, 14115, -781, 8750, 0, 0, 0, 0x10000,  bhvFlyGuy, 63),
	OBJECT_WITH_ACTS(121, 9792, 3490, 5603, 0, 0, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 9896, 3264, 6042, 0, 0, 0, 0x10000,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, 2083, -4554, 2500, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(123, 2083, -4398, 3229, 0, 0, 0, 0x500000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 2917, -3125, 4167, 0, 67, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 3073, -2813, 3854, 0, 67, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 3229, -2500, 3542, 0, 67, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 3385, -2187, 3229, 0, 67, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 3542, -1823, 2969, 0, 67, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(242, 9792, -2260, 8125, 0, 0, 0, 0x10000,  bhvSwitchblock_Switch_MOP, 63),
	OBJECT_WITH_ACTS(121, 2069, -729, 2129, 0, 180, 0, 0x1000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(42, 2083, -4554, -3125, 0, -90, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, 2083, -3112, 5208, 0, 90, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, 9822, -2998, 6979, 0, 90, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(0, 9792, -2552, 5521, 0, 0, 0, 0x2000000,  bhvFlipswitch_Panel_StarSpawn_MOP, 63),
	OBJECT_WITH_ACTS(119, 15010, -1312, 3395, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -5469, -4554, 6823, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 8802, -4554, -2865, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -5449, -3608, -4583, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 3001, -4400, -9155, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 2051, -3125, 5981, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 11719, -2882, 3073, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -10781, -4554, -5365, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, 2063, -4189, -5885, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(152, -6773, -2448, 4288, 0, -25, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -6563, -2135, 3906, 0, -112, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -6240, -1875, 3251, 0, -111, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -5985, -1563, 3034, 0, -92, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -5782, -1302, 3385, 0, -273, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -5781, -1042, 3698, 0, -2, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(152, -5833, -885, 4011, 0, 1, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(121, -5469, -365, 4688, 0, 0, 0, 0x4000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(84, -11927, -3866, -3021, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(188, -13958, -3759, -3021, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(84, -15104, -3073, -4688, 0, 0, 0, 0x0,  bhvEnemyLakitu, 63),
	OBJECT_WITH_ACTS(223, -15052, -3305, -4687, 0, 0, 0, 0x0,  bhvChuckya, 63),
	OBJECT_WITH_ACTS(192, -14063, -2292, -6198, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(188, -11875, -1196, -6198, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(84, -13021, -809, -4583, 0, 0, 0, 0x5000000,  bhvWigglerHead, 32),
	OBJECT_WITH_ACTS(180, -12865, -677, -5260, 0, 0, 0, 0x0,  bhvFireSpitter, 63),
	OBJECT_WITH_ACTS(180, -12917, -677, -3646, 0, 0, 0, 0x0,  bhvFireSpitter, 63),
	OBJECT_WITH_ACTS(123, -15156, -3177, -5469, 0, -29, 0, 0x200000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, -13073, -2136, -6615, 0, 0, 0, 0x200000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(152, -6909, -1042, 4331, 0, -22, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	OBJECT_WITH_ACTS(120, -11563, -757, -4583, 0, 0, 0, 0x0,  bhvRecoveryHeart, 63),
	OBJECT_WITH_ACTS(0, 2083, -4596, 260, 0, 0, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 5781, -4554, -4553, 0, 90, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -1771, -4554, -4583, 0, 90, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 2135, -4554, -2656, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(188, 12292, -2419, 3333, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(212, 9792, 3258, 1615, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(0, 14085, -1792, 4239, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, 2083, -4554, 2500, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(137, 9531, -2679, 7396, 0, 0, 0, 0x60000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(212, -6909, -758, 4331, 0, -21, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(152, -6406, -2135, 3594, 0, -112, 0, 0x0,  bhvShrink_Platform_MOP, 63),
	RETURN()
};

const LevelScript local_warps_ttc_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 12, 0),
	WARP_NODE(12, 9, 1, 11, 0),
	WARP_NODE(13, 9, 1, 14, 0),
	WARP_NODE(14, 9, 1, 13, 0),
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