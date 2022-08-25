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

#include "levels/wdw/header.h"
#include "levels/lll/header.h"

extern u8 _wdw_segment_ESegmentRomStart[];
extern u8 _wdw_segment_ESegmentRomEnd[];

const LevelScript level_wdw_entry[] = {
	INIT_LEVEL(),
	LOAD_MIO0(0x07, _lll_segment_7SegmentRomStart, _lll_segment_7SegmentRomEnd),
	LOAD_RAW(0x1A, _lllSegmentRomStart, _lllSegmentRomEnd),
	LOAD_RAW(0x0E, _wdw_segment_ESegmentRomStart, _wdw_segment_ESegmentRomEnd),
	LOAD_MIO0(        /*seg*/ 0x0B, _effect_mio0SegmentRomStart, _effect_mio0SegmentRomEnd),
	LOAD_MIO0(0xA, _SkyboxCustom30277312_skybox_mio0SegmentRomStart, _SkyboxCustom30277312_skybox_mio0SegmentRomEnd),
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
	JUMP_LINK(local_area_wdw_1_),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 135, -6558, 0, 6464),
	CALL(/*arg*/ 0, /*func*/ lvl_init_or_update),
	CALL_LOOP(/*arg*/ 1, /*func*/ lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(/*frames*/ 1),
	EXIT(),
};

const LevelScript local_area_wdw_1_[] = {
	AREA(1, Geo_wdw_1_0x1ba1700),
	TERRAIN(col_wdw_1_0xe0277f0),
	SET_BACKGROUND_MUSIC(0, 40),
	TERRAIN_TYPE(0),
	JUMP_LINK(local_objects_wdw_1_),
	JUMP_LINK(local_warps_wdw_1_),
	END_AREA(),
	RETURN()
};

const LevelScript local_objects_wdw_1_[] = {
	OBJECT_WITH_ACTS(0, -28047, -1683, 1171, 0, 90, 0, 0xa0000,  bhvSpinAirborneWarp, 63),
	OBJECT_WITH_ACTS(22, -9886, -1875, -15543, 0, 180, 0, 0xb0000,  bhvWarpPipe, 47),
	OBJECT_WITH_ACTS(22, -17070, -2378, -6877, 0, -90, 0, 0xc0000,  bhvWarpPipe, 47),
	OBJECT_WITH_ACTS(22, 21721, -2153, 5399, 0, 117, 0, 0xd0000,  bhvWarpPipe, 63),
	OBJECT_WITH_ACTS(22, -1197, -1878, 7816, 0, -21, 0, 0xe0000,  bhvWarpPipe, 63),
	OBJECT_WITH_ACTS(146, -14843, -2354, 5833, -34, 41, 0, 0x60800000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(241, -20990, -2563, -6250, 0, -38, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(86, -23333, -2354, -573, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -20365, -2354, -990, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -21875, -2354, -3437, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -17656, -2354, 2344, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -16094, -2354, 4010, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(192, -7760, -1693, 12188, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, -7448, -1693, 14896, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(86, -677, -1693, 13594, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(146, -27292, -2474, 729, -18, 90, 0, 0x5050000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(192, -7031, 276, 13438, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, -5677, 1436, 12083, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(192, -3958, 2480, 11823, 0, 0, 0, 0x0,  bhvGoomba, 63),
	OBJECT_WITH_ACTS(121, -4303, 2631, 13220, 0, 180, 0, 0x0,  bhvStar, 63),
	OBJECT_WITH_ACTS(86, -10000, -1875, -17604, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -9323, -884, -19531, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -6250, 1049, -20573, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(137, -4792, 1205, -20677, 0, 0, 0, 0x30000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(121, -1094, 3897, -417, 0, 180, 0, 0x1000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(242, -1823, -2843, 13490, 0, 0, 0, 0x10000,  bhvSwitchblock_Switch_MOP, 63),
	OBJECT_WITH_ACTS(123, -1155, -2787, 13746, 0, 69, 0, 0x550000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(146, -10937, -2029, 8750, -18, -131, 0, 0x60800000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(241, -19948, -2563, -6562, 0, -38, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -18698, -2563, -6875, 0, -38, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(123, -9896, -1667, -18021, 0, -26, 0, 0x250000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(0, -1146, -2891, -11094, 0, 0, 0, 0x40000,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -1146, -236, -8958, 0, 0, 0, 0x0,  bhvCoinFormation, 63),
	OBJECT_WITH_ACTS(0, -4059, -2891, -16133, 0, 90, 0, 0x0,  bhvBouncingFireball, 63),
	OBJECT_WITH_ACTS(0, 5430, -2891, -16143, 0, 90, 0, 0x0,  bhvBouncingFireball, 63),
	OBJECT_WITH_ACTS(0, 6203, -2891, -16084, 0, 90, 0, 0x0,  bhvBouncingFireball, 63),
	OBJECT_WITH_ACTS(241, -1979, -2006, 9688, 0, -21, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -1615, -2006, 8802, 0, -21, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, -1354, -2006, 8125, 0, -21, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 25052, -2370, 2500, 0, -15, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 24115, -2370, -4896, 0, 0, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(137, 20833, 2420, -5521, 0, 0, 0, 0x10000,  bhvExclamationBox, 63),
	OBJECT_WITH_ACTS(121, 19819, 5962, -5313, 0, 90, 0, 0x2000000,  bhvStar, 63),
	OBJECT_WITH_ACTS(86, 25521, -2153, 1198, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 25018, -2153, -2207, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(241, 20853, 2031, -5510, 0, 0, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 22031, -1851, -5208, 0, 0, 0, 0x750000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(123, 21348, 0, -5311, 0, 0, 0, 0x750000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(86, -4583, -1693, 15781, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, -4063, -1693, 10573, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(146, 1771, -1990, 11302, -15, 130, 0, 0x35300000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(123, 4427, -1849, 10260, 0, 0, 0, 0x950000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(119, 4383, 453, 11310, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 5938, 453, 10938, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4896, 1004, 13646, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 5938, 453, 12865, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 5573, 1004, 14948, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4219, 1004, 15417, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 4531, 1338, 16927, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(119, 3385, 1338, 16615, 0, 0, 0, 0x0,  bhvRedCoin, 63),
	OBJECT_WITH_ACTS(0, 4635, -1388, 8958, 0, 0, 0, 0x3000000,  bhvHiddenRedCoinStar, 63),
	OBJECT_WITH_ACTS(0, -4482, -918, 1143, 0, 126, 0, 0xb0000,  bhvFadingWarp, 16),
	OBJECT_WITH_ACTS(0, -28032, -2354, 1171, 0, 90, 0, 0xc0000,  bhvFadingWarp, 16),
	OBJECT_WITH_ACTS(42, -3021, -2468, 1275, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -1094, -2468, 625, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, 0, -2468, -104, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, 0, -2468, -1406, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -833, -2468, -2135, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -1510, -2468, -2188, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -2240, -2468, -1615, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -2344, -2468, -625, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, -1979, -2468, 729, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(42, 729, -2468, -729, 0, 0, 0, 0x0,  bhvFlipswitch_Panel_MOP, 63),
	OBJECT_WITH_ACTS(0, -4427, -1687, 1250, 0, 0, 0, 0x4000000,  bhvFlipswitch_Panel_StarSpawn_MOP, 63),
	OBJECT_WITH_ACTS(86, 13594, -1351, 3021, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 13594, -1351, 52, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 15156, -757, -1927, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 18698, 1027, -677, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 18698, 1027, 2500, 0, 0, 0, 0x0,  bhvSmallBully, 63),
	OBJECT_WITH_ACTS(86, 15833, 4664, 260, 0, 0, 0, 0x10000,  bhvSmallBully, 32),
	OBJECT_WITH_ACTS(86, 16094, 4664, 990, 0, 0, 0, 0x10000,  bhvSmallBully, 32),
	OBJECT_WITH_ACTS(86, 16326, 4664, 651, 0, 0, 0, 0x10000,  bhvSmallBully, 32),
	OBJECT_WITH_ACTS(87, 16073, 4664, 633, 0, 0, 0, 0x5000000,  bhvBigChillBully, 32),
	OBJECT_WITH_ACTS(123, 17500, 1235, 625, 0, 0, 0, 0x990000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(120, 18073, 1079, 625, 0, 0, 0, 0x0,  bhvRecoveryHeart, 63),
	OBJECT_WITH_ACTS(146, 20625, -2318, 5625, -21, -120, 0, 0x80650000,  bhvSpring_MOP, 63),
	OBJECT_WITH_ACTS(123, 17138, 3958, 573, 0, 0, 0, 0x150000,  bhvNoteblock_MOP, 63),
	OBJECT_WITH_ACTS(241, 18229, 513, -1927, 0, 0, 0, 0x20000,  bhvSwitchblock_MOP, 63),
	OBJECT_WITH_ACTS(22, -677, -2891, -8646, 0, 0, 0, 0x0,  bhvWarpPipe, 63),
	OBJECT_WITH_ACTS(195, -21927, -2354, -521, 0, 0, 0, 0x310000,  bhvBobombBuddy, 63),
	RETURN()
};

const LevelScript local_warps_wdw_1_[] = {
	WARP_NODE(10, 9, 1, 10, 0),
	WARP_NODE(11, 11, 1, 12, 0),
	WARP_NODE(12, 11, 1, 11, 0),
	WARP_NODE(13, 11, 1, 14, 0),
	WARP_NODE(14, 11, 1, 13, 0),
	WARP_NODE(240, 26, 1, 240, 0),
	WARP_NODE(241, 26, 1, 241, 0),
	WARP_NODE(0, 17, 1, 10, 0),
	WARP_NODE(1, 11, 1, 241, 0),
	WARP_NODE(2, 9, 1, 10, 0),
	WARP_NODE(3, 9, 1, 10, 0),
	WARP_NODE(4, 9, 1, 10, 0),
	WARP_NODE(5, 9, 1, 10, 0),
	WARP_NODE(6, 11, 1, 10, 0),
	RETURN()
};