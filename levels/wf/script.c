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
#include "levels/wf/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_wf_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _grass_yay0SegmentRomStart, _grass_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group1_yay0SegmentRomStart, _group1_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group1_geoSegmentRomStart, _group1_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group14_yay0SegmentRomStart, _group14_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group14_geoSegmentRomStart, _group14_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_MIO0(0x7, _wf_segment_7SegmentRomStart, _wf_segment_7SegmentRomEnd), 
	LOAD_MIO0(0xa, _water_skybox_mio0SegmentRomStart, _water_skybox_mio0SegmentRomEnd), 
	LOAD_MIO0(0x5, _group1_mio0SegmentRomStart, _group1_mio0SegmentRomEnd), 
	LOAD_MIO0(0x6, _group14_mio0SegmentRomStart, _group14_mio0SegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_2), 
	JUMP_LINK(script_func_global_15), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BUBBLY_TREE, bubbly_tree_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_03, wf_geo_0007E0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_04, wf_geo_000820), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_05, wf_geo_000860), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_06, wf_geo_000878), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_07, wf_geo_000890), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_08, wf_geo_0008A8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_09, wf_geo_0008E8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0A, wf_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0C, wf_geo_000940), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_GIANT_POLE, wf_geo_000AE0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0E, wf_geo_000958), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_0F, wf_geo_0009A0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_PLATFORM, wf_geo_0009B8), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_11, wf_geo_0009D0), 
	LOAD_MODEL_FROM_GEO(MODEL_LEVEL_GEOMETRY_12, wf_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SMALL_BOMP, wf_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_LARGE_BOMP, wf_geo_000A40), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_ROTATING_WOODEN_PLATFORM, wf_geo_000A58), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_SLIDING_PLATFORM, wf_geo_000A98), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE_PART, wf_geo_000AB0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TUMBLING_BRIDGE, wf_geo_000AC8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_TRAPEZOID_PLATORM, wf_geo_000AF8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM, wf_geo_000B10), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_UNUSED, wf_geo_000B38), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_SQUARE_PLATORM_ELEVATOR, wf_geo_000B60), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_RIGHT, wf_geo_000B78), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_BREAKABLE_WALL_LEFT, wf_geo_000B90), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD, wf_geo_000BA8), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_TOWER_DOOR, wf_geo_000BE0), 
	LOAD_MODEL_FROM_GEO(MODEL_WF_KICKABLE_BOARD_FELLED, wf_geo_000BC8), /* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, wf_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_WF, 0x01, 4, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_WF, 0x02, 8, WARP_NO_CHECKPOINT),
		WARP_NODE(6, LEVEL_WF, 0x02, 9, WARP_NO_CHECKPOINT),
		WARP_NODE(7, LEVEL_WF, 0x02, 10, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, 907, 1102, -4324, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3582, 761, -1922, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -2291, 1098, -3084, 0, 90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -200, 1743, -750, 0, 0, 0, (14 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -2670, 538, -1014, 0, 0, 0, (15 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -1074, 1375, -3357, 0, 0, 0, (16 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 907, 1102, -4324, 0, 0, 0, (3 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 925, 2047, -2481, 0, 0, 0, (4 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 1443, -750, 0, 0, 0, (5 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -3129, 238, -1273, 0, 0, 0, (6 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -779, 1075, -3357, 0, 0, 0, (7 << 16), bhvFadingWarp),
		OBJECT(MODEL_BOWLING_BALL, 1175, 459, -325, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 275, 1547, -3714, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 275, 1740, -4614, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_HEAVE_HO, 210, 966, -3063, 0, 0, 0, 0x00000000, bhvHeaveHo),
		OBJECT(MODEL_HEAVE_HO, -591, 990, -1515, 0, 144, 0, 0x00000000, bhvHeaveHo),
		OBJECT(MODEL_NONE, -3799, 1190, -2887, 0, 0, 0, (2 << 24), bhvHiddenStar),
		MARIO_POS(0x01, 0, 0, 200, 0),
		OBJECT(MODEL_RED_COIN, 906, 973, -4755, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 925, 1870, -2481, 0, 0, 0, (3 << 24), bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 1282, 973, -3004, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 925, 2177, -2481, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1138, 1221, -1868, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -453, 961, -562, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -2790, 999, -2528, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -2913, 800, -1928, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1949, 692, -1828, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -1449, 502, -1528, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_NONE, -2390, 895, -2236, 0, 0, 0, 0x00000000, bhvHiddenStarTrigger),
		OBJECT(MODEL_THWOMP, 925, 2177, -2481, 0, -90, 0, 0x00000000, bhvThwomp2),
		OBJECT(MODEL_NONE, 0, 200, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_WHOMP, -3413, 2250, -5335, 0, 0, 0, (4 << 24), bhvWhompKingBoss),
		OBJECT(MODEL_YELLOW_COIN, -1449, 502, -1528, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2513, 582, -1528, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1949, 692, -1828, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2913, 800, -1928, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1449, 694, -2128, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2390, 895, -2236, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -1849, 999, -2528, 0, 0, 0, 0x00000000, bhvYellowCoin),
		OBJECT(MODEL_YELLOW_COIN, -2790, 999, -2528, 0, 0, 0, 0x00000000, bhvYellowCoin),
		TERRAIN(wf_area_1_collision),
		MACRO_OBJECTS(wf_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, wf_area_2),
		WARP_NODE(11, LEVEL_WF, 0x01, 14, WARP_NO_CHECKPOINT),
		WARP_NODE(12, LEVEL_WF, 0x01, 15, WARP_NO_CHECKPOINT),
		WARP_NODE(13, LEVEL_WF, 0x01, 16, WARP_NO_CHECKPOINT),
		WARP_NODE(17, LEVEL_WF, 0x02, 18, WARP_NO_CHECKPOINT),
		WARP_NODE(19, LEVEL_JRB, 0x02, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_WF, 0x03, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_WF, 0x02, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -4039, 2906, -5269, 0, 0, 0, (17 << 16), bhvFadingWarp),
		OBJECT(MODEL_CHUCKYA, -2464, 2915, -4124, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_NONE, 1609, 1131, -2374, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, -3529, 2912, -4931, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -3663, 1131, -2011, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 590, 1131, -3084, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1153, 1382, -4004, 0, 0, 0, (10 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 933, 284, -2610, 0, 0, 0, (11 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -4056, 963, -3116, 0, 0, 0, (12 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 1153, 1082, -4204, 0, 0, 0, (13 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 1154, 2466, -5014, 0, 0, 0, (18 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 933, 584, -2410, 0, 0, 0, (8 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -3856, 1263, -2916, 0, 0, 0, (9 << 16), bhvFadingWarp),
		OBJECT(MODEL_BOWLING_BALL, -1053, 3514, -5081, 0, 180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -3828, 2638, -3596, 0, 180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -1053, 2455, -3596, 0, 180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 1151, 1786, -4601, 0, 180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -1053, 1416, -3084, 0, 180, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_GOOMBA, 69, 296, -902, 0, 0, 0, (20 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, 1043, 296, -1899, 0, 0, 0, (20 << 16), bhvGoomba),
		OBJECT(MODEL_GOOMBA, -3151, 2915, -4338, 0, 0, 0, (20 << 16), bhvGoomba),
		OBJECT(MODEL_NONE, 0, 700, -150, 0, 0, 0, (19 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_EXCLAMATION_BOX, -3561, 1689, -3396, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, 301, -542, -1418, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 334, -542, -1494, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 238, -538, -1331, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 238, -438, -1331, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 304, -432, -1418, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 363, -426, -1498, 0, 0, 0, (21 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 669, 300, -1298, 0, 0, 0, (20 << 16), bhvWarpPipe),
		OBJECT(MODEL_STAR, -175, 4030, -5081, 0, 0, 0, 0x00000000, bhvStar),
		OBJECT(MODEL_STAR, 1154, 2463, -5014, 0, 0, 0, (1 << 24), bhvStar),
		TERRAIN(wf_area_2_collision),
		MACRO_OBJECTS(wf_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SPOOKY),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(3, wf_area_3),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_WF, 0x02, 20, WARP_NO_CHECKPOINT),
		WARP_NODE(21, LEVEL_WF, 0x03, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_WF, 0x03, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(241, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_PIRANHA_PLANT, -4999, 281, 1008, 0, 0, 0, (5 << 24) | (1 << 16), bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 7219, 91, 964, 0, 0, 0, (5 << 24) | (1 << 16), bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, 5641, 292, -5675, 0, 0, 0, (5 << 24) | (1 << 16), bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -637, 292, -4713, 0, 0, 0, (5 << 24) | (1 << 16), bhvFirePiranhaPlant),
		OBJECT(MODEL_PIRANHA_PLANT, -2481, 110, -4073, 0, 0, 0, (5 << 24) | (1 << 16), bhvFirePiranhaPlant),
		OBJECT(MODEL_NONE, -4999, 281, 1008, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 7219, 91, 964, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 4094, 91, -2733, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3100, 245, -4428, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 5641, 292, -5675, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -48, -531, 1941, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, -150, -531, 7015, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_BOWLING_BALL, 3100, 245, -4428, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_NONE, -48, 0, 1941, 0, 0, 0, (1 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -150, -282, 7015, 0, 0, 0, (2 << 16), bhvFadingWarp),
		TERRAIN(wf_area_3_collision),
		MACRO_OBJECTS(wf_area_3_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_SLIDE),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 200, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};