void scroll_gfx_mat_castle_grounds_dl_decor_2_layer1() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_decor_2_layer1);

	shift_s(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_castle_grounds_dl_water_layer1() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_water_layer1);


	shift_t(mat, 12, PACK_TILESIZE(0, 2));
	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_castle_grounds_dl_decor_3_001_layer1() {
	Gfx *mat = segmented_to_virtual(mat_castle_grounds_dl_decor_3_001_layer1);

	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_castle_grounds() {
	scroll_gfx_mat_castle_grounds_dl_decor_2_layer1();
	scroll_gfx_mat_castle_grounds_dl_water_layer1();
	scroll_gfx_mat_castle_grounds_dl_decor_3_001_layer1();
};
