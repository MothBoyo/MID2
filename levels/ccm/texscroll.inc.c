void scroll_ccm_dl_VISUAL_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 10;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(ccm_dl_VISUAL_mesh_layer_1_vtx_8);

	deltaY = (int)(0.20000000298023224 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_ccm_dl_water_layer1() {
	Gfx *mat = segmented_to_virtual(mat_ccm_dl_water_layer1);


	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_ccm() {
	scroll_ccm_dl_VISUAL_mesh_layer_1_vtx_8();
	scroll_gfx_mat_ccm_dl_water_layer1();
};
