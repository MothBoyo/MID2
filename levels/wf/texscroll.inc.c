void scroll_wf_dl_VISUAL_mesh_layer_1_vtx_5() {
	int i = 0;
	int count = 10;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_mesh_layer_1_vtx_5);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_mesh_layer_1_vtx_12() {
	int i = 0;
	int count = 14;
	int width = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_mesh_layer_1_vtx_12);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_mesh_layer_1_vtx_18() {
	int i = 0;
	int count = 18;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_mesh_layer_1_vtx_18);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_VISUAL_mesh_layer_1_vtx_19() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_mesh_layer_1_vtx_19);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_mesh_layer_1_vtx_20() {
	int i = 0;
	int count = 45;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_mesh_layer_1_vtx_20);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_002_mesh_layer_1_vtx_8() {
	int i = 0;
	int count = 9;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_002_mesh_layer_1_vtx_8);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_002_mesh_layer_1_vtx_9() {
	int i = 0;
	int count = 37;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_002_mesh_layer_1_vtx_9);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_001_mesh_layer_1_vtx_6() {
	int i = 0;
	int count = 18;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_001_mesh_layer_1_vtx_6);

	deltaY = (int)(1.0 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_wf_dl_VISUAL_001_mesh_layer_1_vtx_7() {
	int i = 0;
	int count = 18;
	int width = 32 * 0x20;

	static int currentX = 0;
	int deltaX;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_001_mesh_layer_1_vtx_7);

	deltaX = (int)(1.0 * 0x20) % width;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
	}
	currentX += deltaX;
}

void scroll_wf_dl_VISUAL_001_mesh_layer_5_vtx_0() {
	int i = 0;
	int count = 373;
	int height = 32 * 0x20;

	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(wf_dl_VISUAL_001_mesh_layer_5_vtx_0);

	deltaY = (int)(-0.699999988079071 * 0x20) % height;

	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[1] += deltaY;
	}
	currentY += deltaY;
}

void scroll_gfx_mat_wf_dl_Death_floor_layer1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_Death_floor_layer1);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_WALL_DECOR_layer1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_WALL_DECOR_layer1);

	shift_s(mat, 11, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_FLESH() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_FLESH);

	shift_s(mat, 9, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_FLESH__transparent_() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_FLESH__transparent_);

	shift_s(mat, 9, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_Stone_SLIPPERY_layer1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_Stone_SLIPPERY_layer1);

	shift_t(mat, 20, PACK_TILESIZE(0, 2));

};

void scroll_gfx_mat_wf_dl_LAVA_layer1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_LAVA_layer1);


	shift_t(mat, 11, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 2));

};

void scroll_gfx_mat_wf_dl_WATER_layer1() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_WATER_layer1);


	shift_t(mat, 12, PACK_TILESIZE(0, 1));
	shift_t_down(mat, 17, PACK_TILESIZE(0, 2));

};

void scroll_gfx_mat_wf_dl_water__REAL__001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_water__REAL__001_layer5);


	shift_s(mat, 12, PACK_TILESIZE(0, 1));
	shift_s(mat, 17, PACK_TILESIZE(0, 1));
	shift_t(mat, 17, PACK_TILESIZE(0, 1));

};

void scroll_gfx_mat_wf_dl_WATER_001_layer5() {
	Gfx *mat = segmented_to_virtual(mat_wf_dl_WATER_001_layer5);


	shift_s(mat, 11, PACK_TILESIZE(0, 1));
	shift_s(mat, 16, PACK_TILESIZE(0, 1));
	shift_t(mat, 16, PACK_TILESIZE(0, 1));

};

void scroll_wf() {
	scroll_wf_dl_VISUAL_mesh_layer_1_vtx_5();
	scroll_wf_dl_VISUAL_mesh_layer_1_vtx_12();
	scroll_wf_dl_VISUAL_mesh_layer_1_vtx_18();
	scroll_wf_dl_VISUAL_mesh_layer_1_vtx_19();
	scroll_wf_dl_VISUAL_mesh_layer_1_vtx_20();
	scroll_wf_dl_VISUAL_002_mesh_layer_1_vtx_8();
	scroll_wf_dl_VISUAL_002_mesh_layer_1_vtx_9();
	scroll_wf_dl_VISUAL_001_mesh_layer_1_vtx_6();
	scroll_wf_dl_VISUAL_001_mesh_layer_1_vtx_7();
	scroll_wf_dl_VISUAL_001_mesh_layer_5_vtx_0();
	scroll_gfx_mat_wf_dl_Death_floor_layer1();
	scroll_gfx_mat_wf_dl_WALL_DECOR_layer1();
	scroll_gfx_mat_wf_dl_FLESH();
	scroll_gfx_mat_wf_dl_FLESH__transparent_();
	scroll_gfx_mat_wf_dl_Stone_SLIPPERY_layer1();
	scroll_gfx_mat_wf_dl_LAVA_layer1();
	scroll_gfx_mat_wf_dl_WATER_layer1();
	scroll_gfx_mat_wf_dl_water__REAL__001_layer5();
	scroll_gfx_mat_wf_dl_WATER_001_layer5();
};
