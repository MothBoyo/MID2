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
#include "levels/jrb/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_jrb_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _jrb_segment_7SegmentRomStart, _jrb_segment_7SegmentRomEnd), 
	LOAD_YAY0(0x0B, _effect_yay0SegmentRomStart, _effect_yay0SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _water_yay0SegmentRomStart, _water_yay0SegmentRomEnd), 
	LOAD_YAY0(0x0A, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group2_yay0SegmentRomStart, _group2_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group2_geoSegmentRomStart, _group2_geoSegmentRomEnd), 
	LOAD_YAY0(0x06, _group17_yay0SegmentRomStart, _group17_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group17_geoSegmentRomStart, _group17_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_3), 
	JUMP_LINK(script_func_global_18), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_LEFT_HALF_PART, jrb_geo_000978), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_LEFT_PART, jrb_geo_0009B0), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_RIGHT_HALF_PART, jrb_geo_0009E8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SHIP_BACK_RIGHT_PART, jrb_geo_000A00), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP, jrb_geo_000990), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SUNKEN_SHIP_BACK, jrb_geo_0009C8), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_ROCK, jrb_geo_000930), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_SLIDING_BOX, jrb_geo_000960), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR, jrb_geo_000900), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FALLING_PILLAR_BASE, jrb_geo_000918), 
	LOAD_MODEL_FROM_GEO(MODEL_JRB_FLOATING_PLATFORM, jrb_geo_000948), /* Fast64 begin persistent block [level commands] */
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
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, jrb_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_JRB, 0x01, 4, WARP_NO_CHECKPOINT),
		WARP_NODE(5, LEVEL_JRB, 0x01, 6, WARP_NO_CHECKPOINT),
		WARP_NODE(7, LEVEL_JRB, 0x01, 8, WARP_NO_CHECKPOINT),
		WARP_NODE(8, LEVEL_JRB, 0x02, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_JRB, 0x01, 4, WARP_NO_CHECKPOINT),
		WARP_NODE(11, LEVEL_JRB, 0x04, 1, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHUCKYA, -3197, -1117, -2760, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 1213, -1117, -5792, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_CHUCKYA, 3345, -1441, -10440, 0, 0, 0, 0x00000000, bhvChuckya),
		OBJECT(MODEL_NONE, -2649, -1117, -2269, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 1213, -1117, -5792, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 2302, -1523, -10070, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 3246, -1095, -3347, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2246, -1095, -4347, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 1246, -1095, -3347, 0, 0, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_NONE, 2246, -1095, -2347, 0, -90, 0, 0x00000000, bhvCoinFormation),
		OBJECT(MODEL_BOWLING_BALL, 5796, -1491, -5401, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 6975, -1162, -5221, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 3246, -734, -4347, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 3246, -734, -2347, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 1246, -734, -2347, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 1246, -734, -4347, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, 2570, -1099, -10710, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_EXCLAMATION_BOX, -3197, -817, -2760, 0, 0, 0, (1 << 16), bhvExclamationBox),
		OBJECT(MODEL_RED_COIN, 1884, -312, -10742, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 2451, 100, -6871, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, 3843, -16, -10531, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6796, -432, -6901, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 5296, -432, -5901, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6608, -1162, -5562, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6796, -1440, -6401, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6296, -1440, -6901, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 6296, -1440, -5901, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, 2246, -426, -847, 0, 0, 0, (1 << 24) | (8 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -2273, -1100, -357, 0, 0, 0, (2 << 24) | (8 << 16), bhvExclamationBox),
		OBJECT(MODEL_SNUFIT, 2501, 100, -6924, 0, 0, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 6935, -220, -7163, 0, 0, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 5140, -270, -5880, 0, 0, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 5846, -201, -1598, 0, 0, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_SNUFIT, 5462, -201, -1143, 0, 0, 0, 0x00000000, bhvSnufit),
		OBJECT(MODEL_EXCLAMATION_BOX, 1946, -968, -6903, 0, 0, 0, (2 << 16), bhvExclamationBox),
		OBJECT(MODEL_NONE, -2105, -3269, -9386, 0, 0, 0, (11 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 5507, -14, -388, 0, 0, 0, (3 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 500, 0, 0, 0, 0, (4 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 5796, -1101, -6901, 0, 0, 0, (5 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 3863, -63, -10276, 0, 0, 0, (5 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 1996, -539, -6401, 0, 0, 0, (6 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, -931, -814, -732, 0, 0, 0, (7 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 2246, -1227, -3347, 0, 0, 0, (8 << 16), bhvWarp),
		OBJECT(MODEL_NONE, 5930, 491, -2684, 0, 0, 0, (8 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 0, 100, 0, 0, 0, 0, 0x000A0000, bhvSpinAirborneWarp),
		OBJECT(MODEL_STAR, 5535, 220, -611, 0, 0, 0, (5 << 24), bhvStar),
		TERRAIN(jrb_area_1_collision),
		MACRO_OBJECTS(jrb_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SAND),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(2, jrb_area_2),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_JRB, 0x02, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_JRB, 0x01, 4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_NONE, -2028, 919, -100, 0, 0, 0, (1 << 16), bhvSpinAirborneWarp),
		OBJECT(MODEL_NONE, 11344, -4258, -5262, 0, 0, 0, (2 << 16), bhvFadingWarp),
		OBJECT(MODEL_STAR, 11344, -4002, -5262, 0, 0, 0, (3 << 24), bhvStar),
		TERRAIN(jrb_area_2_collision),
		MACRO_OBJECTS(jrb_area_2_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_SLIDE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	AREA(4, jrb_area_4),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_JRB, 0x04, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_JRB, 0x01, 4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BULLY_BOSS, 3194, 1950, -4118, 0, 0, 0, (4 << 24), bhvBigBully),
		OBJECT(MODEL_NONE, 3194, 1950, -4118, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_NONE, 0, 250, 0, 0, 0, 0, (2 << 16), bhvCoinFormation),
		OBJECT(MODEL_BOWLING_BALL, -1605, 700, -2466, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_BOWLING_BALL, -1605, 1300, -4118, 0, 0, 0, 0x00000000, bhvFireSpitter),
		OBJECT(MODEL_NONE, 0, 500, 0, 0, 0, 0, (1 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 3194, 1950, -4118, 0, 0, 0, (2 << 16), bhvFadingWarp),
		TERRAIN(jrb_area_4_collision),
		MACRO_OBJECTS(jrb_area_4_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(1, 0, 0, 0, 0),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};