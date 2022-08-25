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

#include "levels/ccm/header.h"
#include "levels/lll/header.h"

extern u8 _ccm_segment_ESegmentRomStart[];
extern u8 _ccm_segment_ESegmentRomEnd[];

const LevelScript level_ccm_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
	LOAD_RAW(0x0E, _ccm_segment_ESegmentRomStart, _ccm_segment_ESegmentRomEnd),
	LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom21626560_skybox_mio0SegmentRomStart, _SkyboxCustom21626560_skybox_mio0SegmentRomEnd),
	LOAD_MIO0(8, _common0_mio0SegmentRomStart, _common0_mio0SegmentRomEnd),
	LOAD_RAW(15, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd),
	LOAD_MIO0(5, _group2_mio0SegmentRomStart, _group2_mio0SegmentRomEnd),
	LOAD_RAW(12, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd),
	LOAD_MIO0(6, _group16_mio0SegmentRomStart, _group16_mio0SegmentRomEnd),
	LOAD_RAW(13, _group16_geoSegmentRomStart, _group16_geoSegmentRomEnd),
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
	// LOAD_MODEL_FROM_GEO(100, 0x06003754),
	// LOAD_MODEL_FROM_GEO(101, 0x06003874),
	// LOAD_MODEL_FROM_DL(132, 0x08025f08, 4),
	// LOAD_MODEL_FROM_DL(158, 0x0302c8a0, 4),
	// LOAD_MODEL_FROM_DL(159, 0x0302bcd0, 4),
	// LOAD_MODEL_FROM_DL(161, 0x0301cb00, 4),
	// LOAD_MODEL_FROM_DL(164, 0x04032a18, 4),
	// LOAD_MODEL_FROM_DL(201, 0x080048e0, 4),
	// LOAD_MODEL_FROM_DL(218, 0x08024bb8, 4),
	JUMP_LINK(script_func_global_1),
	JUMP_LINK(script_func_global_3),
	JUMP_LINK(script_func_global_17),
	JUMP_LINK(local_area_ccm_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_ccm_1_[] = {
	AREA(1, Geo_ccm_1_0x1361700),
	TERRAIN(col_ccm_1_0xe05a490),
	SET_BACKGROUND_MUSIC(0, 8),
	TERRAIN_TYPE(2),
	JUMP_LINK(local_objects_ccm_1_),
	JUMP_LINK(local_warps_ccm_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_ccm_1_[] = {
	OBJECT_WITH_ACTS(0, -3333, -4990, 9115, 0, 180, 0, 0xa0000,  bhvSpinAirborneWarp, 31),
	OBJECT_WITH_ACTS(0, 583, 2683, -5387, 0, -154, 0, 0xb0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1680, 3835, -5523, 0, -153, 0, 0xc0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -6612, 1024, -3351, 0, 107, 0, 0xd0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, 1980, 768, 6618, 0, -151, 0, 0xe0000,  bhvFadingWarp, 31),
	OBJECT_WITH_ACTS(0, -4375, -5667, 6823, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(100, -5104, -4777, 3802, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(188, -990, -3419, 1927, 0, 0, 0, 0x0,  bhvBobomb, 63),
	OBJECT_WITH_ACTS(100, 1042, -5287, -5833, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, 5833, -3604, -6198, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(0, -2135, -5287, -5052, 0, 0, 0, 0x10000,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(0, -1771, -5287, -10625, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(100, -9063, -8157, -10052, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -17552, -8157, -4792, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -19375, -8157, -4167, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(123, 313, -3315, 1510, 0, 0, 0, 0x850000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(242, 1875, -1873, -8958, 0, 0, 0, 0x20000,  bhvSwitchblock_Switch_MOP, 63),
	OBJECT_WITH_ACTS(241, 313, -3263, 1510, 0, 0, 0, 0x0,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(121, 1667, -729, 1458, 0, -90, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(0, 938, -3419, 2760, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(100, 5573, -2994, -10104, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -23958, -8492, 1354, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -25833, -8492, 6615, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(0, -23906, -8492, 5677, 0, -65, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(121, -24688, -6510, 9583, 0, -175, 0, 0x1000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(137, 4167, -4280, 5573, 0, 0, 0, 0x60000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(123, 4844, -4749, 6510, 0, 0, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 6615, -3656, 6250, 0, 0, 0, 0x300000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 8854, -2595, 6615, 0, 0, 0, 0x850000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(100, 7656, -2751, 6250, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 11875, 392, 7031, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 14844, 1789, 9635, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 15573, 1789, 6094, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 19063, 1789, 10729, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 21146, 1789, 10885, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(212, 22240, 1979, 9323, 0, 0, 0, 0x0,  bhv1Up, 63),
	OBJECT_WITH_ACTS(86, 20885, 3002, 7917, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 18646, 3709, 9063, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(0, 19635, 5625, 9948, 0, 0, 0, 0x110000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(121, 19792, 7135, 9635, 0, -26, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(119, 2813, -3419, 885, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -6094, -5667, 8542, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4427, -5287, -11563, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -11979, -1919, -9427, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 7083, -2751, 5313, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -6667, -5667, 4896, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 8125, -5131, -6979, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, -4115, -4777, 5260, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, -3542, -3159, 1146, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(0, -3594, -3419, 1198, 0, 0, 0, 0x0,  bhvGoombaTripletSpawner, 63),
	OBJECT_WITH_ACTS(137, 15938, 1406, 3542, 0, 0, 0, 0x30000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(121, 25625, -5134, 7031, 0, 0, 0, 0x4000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(100, -4219, -7891, -5573, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -2240, -7891, -6094, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(100, -3750, -7891, -6875, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(101, -3177, -7891, -6094, 0, 0, 0, 0x5000000,  bhvBigBully, 32),
	OBJECT_WITH_ACTS(146, -6823, -8105, -9271, -19, 34, -49, 0x30300000,  bhvSpring_MOP, 32),
	OBJECT_WITH_ACTS(123, -3646, -3464, -6979, 0, -47, 0, 0x200000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(0, 6406, -5287, -8646, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -3958, -1919, -7813, 0, 0, 0, 0x20000,  bhvCoinFormation, 63),
	RETURN()
};

const LevelScript local_warps_ccm_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 9, 1, 12, 0),
	WARP_NODE(12, 9, 1, 11, 0),
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