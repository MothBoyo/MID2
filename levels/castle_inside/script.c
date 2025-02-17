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
#include "levels/castle_inside/header.h"

/* Fast64 begin persistent block [scripts] */
/* Fast64 end persistent block [scripts] */

const LevelScript level_castle_inside_entry[] = {
	INIT_LEVEL(),
	LOAD_YAY0(0x07, _castle_inside_segment_7SegmentRomStart, _castle_inside_segment_7SegmentRomEnd), 
	LOAD_YAY0_TEXTURE(0x09, _inside_yay0SegmentRomStart, _inside_yay0SegmentRomEnd), 
	LOAD_YAY0(0x06, _group15_yay0SegmentRomStart, _group15_yay0SegmentRomEnd), 
	LOAD_RAW(0x0D, _group15_geoSegmentRomStart, _group15_geoSegmentRomEnd), 
	LOAD_YAY0(0xa, _water_skybox_yay0SegmentRomStart, _water_skybox_yay0SegmentRomEnd), 
	LOAD_YAY0(0x5, _group10_yay0SegmentRomStart, _group10_yay0SegmentRomEnd), 
	LOAD_RAW(0xc, _group10_geoSegmentRomStart, _group10_geoSegmentRomEnd), 
	LOAD_YAY0(0x08, _common0_yay0SegmentRomStart, _common0_yay0SegmentRomEnd), 
	LOAD_RAW(0x0F, _common0_geoSegmentRomStart, _common0_geoSegmentRomEnd), 
	ALLOC_LEVEL_POOL(),
	MARIO(MODEL_MARIO, 0x00000001, bhvMario), 
	JUMP_LINK(script_func_global_1), 
	JUMP_LINK(script_func_global_16), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_BOWSER_TRAP, castle_geo_000F18), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WATER_LEVEL_PILLAR, castle_geo_001940), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_MINUTE_HAND, castle_geo_001530), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_HOUR_HAND, castle_geo_001548), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CLOCK_PENDULUM, castle_geo_001518), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_METAL_DOOR, metal_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_CASTLE_DOOR_UNUSED, castle_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_WOODEN_DOOR_UNUSED, wooden_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_0_STARS, castle_door_0_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_1_STAR, castle_door_1_star_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_DOOR_3_STARS, castle_door_3_stars_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_KEY_DOOR, key_door_geo), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_30_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_8_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_50_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CASTLE_STAR_DOOR_70_STARS, castle_geo_000F00), 
	LOAD_MODEL_FROM_GEO(MODEL_CUBE, CUBE_geo), 
	/* Fast64 begin persistent block [level commands] */
	/* Fast64 end persistent block [level commands] */

	AREA(1, castle_inside_area_1),
		WARP_NODE(0x0A, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF0, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(0xF1, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(0, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(1, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(2, LEVEL_JRB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(3, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(4, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(5, LEVEL_BOB, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(6, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(7, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(8, LEVEL_CCM, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(9, LEVEL_WF, 0x02, 19, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(10, LEVEL_WF, 0x02, 19, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(11, LEVEL_WF, 0x02, 19, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(12, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(13, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(14, LEVEL_WF, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(15, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(16, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		PAINTING_WARP_NODE(17, LEVEL_PSS, 0x01, 0x0A, WARP_NO_CHECKPOINT),
		WARP_NODE(1, LEVEL_CASTLE, 0x01, 1, WARP_NO_CHECKPOINT),
		WARP_NODE(2, LEVEL_CASTLE, 0x01, 2, WARP_NO_CHECKPOINT),
		WARP_NODE(100, LEVEL_CASTLE, 0x01, 100, WARP_NO_CHECKPOINT),
		OBJECT(MODEL_BLACK_BOBOMB, 21, -84, -2657, 0, -180, 0, (4 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BOBOMB_BUDDY, -511, 916, -3962, 0, -135, 0, (2 << 16), bhvBobombBuddy),
		OBJECT(MODEL_BLACK_BOBOMB, -1438, -84, -2665, 0, -135, 0, (1 << 16), bhvBobombBuddy),
		OBJECT(MODEL_CUBE, 21, 77, -1422, 0, 0, 0, 0x00000000, bhvRotatingCube),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, -54, -84, -272, 0, 0, 0, (1 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_GROUNDS_CASTLE_DOOR, 96, -84, -272, 0, -180, 0, (2 << 16), bhvDoorWarp),
		OBJECT(MODEL_CASTLE_DOOR_3_STARS, 2871, 666, -1422, 0, -90, 0, (6 << 24), bhvDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, 96, 916, -4090, 0, 180, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_CASTLE_STAR_DOOR_8_STARS, -54, 916, -4090, 0, 0, 0, 0x00000000, bhvStarDoor),
		OBJECT(MODEL_NONE, 3971, 1191, -2459, 0, -90, 0, 0x00000000, bhvTankFishGroup),
		OBJECT(MODEL_NONE, 3971, 1191, -969, 0, -90, 0, 0x00000000, bhvTankFishGroup),
		MARIO_POS(0x01, 0, 0, 17, -291),
		OBJECT(MODEL_NONE, 21, 248, -1422, 0, 0, 0, (100 << 16), bhvPaintingDeathWarp),
		OBJECT(MODEL_NONE, 21, 746, -2890, 0, 0, 0, (101 << 16), bhvFadingWarp),
		OBJECT(MODEL_NONE, 0, 17, -291, 0, 180, 0, 0x000A0000, bhvSpinAirborneWarp),
		TERRAIN(castle_inside_area_1_collision),
		ROOMS(castle_inside_area_1_collision_rooms),
		MACRO_OBJECTS(castle_inside_area_1_macro_objs),
		SET_BACKGROUND_MUSIC(0x00, SEQ_LEVEL_UNDERGROUND),
		TERRAIN_TYPE(TERRAIN_STONE),
		/* Fast64 begin persistent block [area commands] */
		/* Fast64 end persistent block [area commands] */
	END_AREA(),
	FREE_LEVEL_POOL(),
	MARIO_POS(0x01, 0, 0, 17, -291),
	CALL(0, lvl_init_or_update),
	CALL_LOOP(1, lvl_init_or_update),
	CLEAR_LEVEL(),
	SLEEP_BEFORE_EXIT(1),
	EXIT(),
};