void scroll_bob_dl_VISUAL_mesh_layer_1_vtx_19() {
	int i = 0;
	int count = 9;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_VISUAL_mesh_layer_1_vtx_19);

	deltaY = (int)(-1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_bob_dl_VISUAL_mesh_layer_1_vtx_21() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(bob_dl_VISUAL_mesh_layer_1_vtx_21);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_bob_dl_VISUAL_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 13;
	int height = 64 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(bob_dl_VISUAL_mesh_layer_5_vtx_0);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_bob_dl_water_layer5() {
	Gfx *mat = segmented_to_virtual(mat_bob_dl_water_layer5);


	shift_t(mat, 12, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_bob() {
	scroll_bob_dl_VISUAL_mesh_layer_1_vtx_19();
	scroll_bob_dl_VISUAL_mesh_layer_1_vtx_21();
	scroll_bob_dl_VISUAL_mesh_layer_5_vtx_0();
	scroll_gfx_mat_bob_dl_water_layer5();
};
