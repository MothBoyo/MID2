void scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 16;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_mesh_layer_1_vtx_8);

	deltaY = (int)(0.5 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_16() {
	int i = 0;
	int count = 26;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_mesh_layer_1_vtx_16);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_17() {
	int i = 0;
	int count = 37;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_mesh_layer_1_vtx_17);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_VISUAL_001_mesh_layer_1_vtx_4() {
	int i = 0;
	int count = 18;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_001_mesh_layer_1_vtx_4);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_VISUAL_002_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 17;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_002_mesh_layer_1_vtx_6);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_jrb_dl_VISUAL_002_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 17;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(jrb_dl_VISUAL_002_mesh_layer_1_vtx_7);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_gfx_mat_jrb_dl_Death_Sand_layer1() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_Death_Sand_layer1);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_Lava_layer1() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_Lava_layer1);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_Death_Sand_FADE_OUT_layer5() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_Death_Sand_FADE_OUT_layer5);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_f3dlite_material_002_layer5() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_f3dlite_material_002_layer5);


	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_face_1_layer1() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_face_1_layer1);

	shift_t_down(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_wall_001_layer1() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_wall_001_layer1);

	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_jrb_dl_wall__FADE_OUT__layer5() {
	Gfx *mat = segmented_to_virtual(mat_jrb_dl_wall__FADE_OUT__layer5);

	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_jrb() {
	scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_8();
	scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_16();
	scroll_jrb_dl_VISUAL_mesh_layer_1_vtx_17();
	scroll_jrb_dl_VISUAL_001_mesh_layer_1_vtx_4();
	scroll_jrb_dl_VISUAL_002_mesh_layer_1_vtx_6();
	scroll_jrb_dl_VISUAL_002_mesh_layer_1_vtx_7();
	scroll_gfx_mat_jrb_dl_Death_Sand_layer1();
	scroll_gfx_mat_jrb_dl_Lava_layer1();
	scroll_gfx_mat_jrb_dl_Death_Sand_FADE_OUT_layer5();
	scroll_gfx_mat_jrb_dl_f3dlite_material_002_layer5();
	scroll_gfx_mat_jrb_dl_face_1_layer1();
	scroll_gfx_mat_jrb_dl_wall_001_layer1();
	scroll_gfx_mat_jrb_dl_wall__FADE_OUT__layer5();
};
