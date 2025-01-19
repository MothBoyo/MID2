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
#include "levels/pss/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_pss_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _pss_segment_7SegmentRomStart, _pss_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _mountain_yay0SegmentRomStart, _mountain_yay0SegmentRomEnd), 
	LOAD_YAY0(0x05, _group8_yay0SegmentRomStart, _group8_yay0SegmentRomEnd), 
	LOAD_RAW(0x0C, _group8_geoSegmentRomStart, _group8_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	LOAD_YAY0(0x6, _group13_yay0SegmentRomStart, _group13_yay0SegmentRomEnd), 
	LOAD_RAW(0xd, _group13_geoSegmentRomStart, _group13_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_9), 
	JUMP_LINK(script_func_global_14), 
	LOAD_MODEL_FROM_GEO(MODEL_SSL_PALM_TREE, palm_tree_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, pss_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(3, LEVEL_BOB, 0x02, 4, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_CHUCKYA, 212, 250, 65, 0, 0, 0, 0x00000000, bhvChuckya),
		MARIO_POS(0x01, -90, 3028, 278, -263),
		OBJECT(MODEL_CAP_SWITCH, -2779, 300, 1787, 0, -120, 0, (2 << 16), bhvCapSwitch),
		OBJECT(MODEL_SSL_PALM_TREE, 1227, 100, -3041, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -210, 100, -3557, 0, 0, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_SSL_PALM_TREE, -550, 997, -631, 0, 158, 0, 0x00000000, bhvTree),
		OBJECT(MODEL_RED_COIN, -445, 541, -393, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_NONE, -142, 1150, -553, 0, 0, 0, 0x00000000, bhvHiddenRedCoinStar),
		OBJECT(MODEL_RED_COIN, -3559, 406, -1187, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -2142, 297, -2788, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1242, 358, 2550, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -3041, 358, 1654, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -393, 252, -860, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, -550, 1497, -631, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_RED_COIN, 1227, 600, -3041, 0, 0, 0, 0x00000000, bhvRedCoin),
		OBJECT(MODEL_SKEETER, -3558, 0, 435, 0, 180, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_SKEETER, -1236, 0, -3983, 0, 0, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_SKEETER, 2758, 0, 2000, 0, 142, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_SKEETER, -468, 0, 3503, 0, 180, 0, 0x00000000, bhvSkeeter),
		OBJECT(MODEL_CAP_SWITCH, 678, 100, -3746, 0, -22, 0, (1 << 16), bhvCapSwitch),
		OBJECT(MODEL_NONE, 3028, 278, -263, 0, -90, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(pss_area_1_collision),
		MACRO_OBJECTS(pss_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_GRASS),
		TERRAIN_TYPE(TERRAIN_GRASS),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, -90, 3028, 278, -263),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};