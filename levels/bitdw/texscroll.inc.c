void scroll_gfx_mat_bitdw_dl_floor_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bitdw_dl_floor_layer1);


	shift_t(mat, 12, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_bitdw_dl_star_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bitdw_dl_star_layer1);


	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t(mat, 12, PACK_TILESIZE(0, 1));
	shift_s_down(mat, 17, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_bitdw_dl_face_wall_layer1() {
	Gfx *mat = segmented_to_virtual(mat_bitdw_dl_face_wall_layer1);

	shift_s(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_bitdw() {
	scroll_gfx_mat_bitdw_dl_floor_layer1();
	scroll_gfx_mat_bitdw_dl_star_layer1();
	scroll_gfx_mat_bitdw_dl_face_wall_layer1();
};
