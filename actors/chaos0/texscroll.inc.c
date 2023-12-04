void scroll_chaos0_000_offset_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 71;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_001_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 108;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_001_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_displaylist_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 278;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_displaylist_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 47;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_003_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_004_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_004_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_displaylist_003_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 55;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_displaylist_003_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_006_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 46;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_006_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_007_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_007_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_displaylist_004_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 53;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_displaylist_004_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_009_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_009_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_010_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_010_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_011_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 69;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_011_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_012_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_012_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_offset_013_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 30;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_offset_013_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_chaos0_000_displaylist_005_mesh_layer_1_vtx_0() {
	int i = 0;
	int count = 71;
	int width = 64 * 0x20;
	int height = 64 * 0x20;

	static int currentX = 0;
	int deltaX;
	static int currentY = 0;
	int deltaY;
	Vtx *vertices = segmented_to_virtual(chaos0_000_displaylist_005_mesh_layer_1_vtx_0);

	deltaX = (int)(0.4000000059604645 * 0x20) % width;
	deltaY = (int)(0.4000000059604645 * 0x20) % height;

	if (absi(currentX) > width) {
		deltaX -= (int)(absi(currentX) / width) * width * signum_positive(deltaX);
	}
	if (absi(currentY) > height) {
		deltaY -= (int)(absi(currentY) / height) * height * signum_positive(deltaY);
	}

	for (i = 0; i < count; i++) {
		vertices[i].n.tc[0] += deltaX;
		vertices[i].n.tc[1] += deltaY;
	}
	currentX += deltaX;	currentY += deltaY;
}

void scroll_actor_geo_chaos0() {
	scroll_chaos0_000_offset_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_001_mesh_layer_1_vtx_0();
	scroll_chaos0_000_displaylist_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_003_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_004_mesh_layer_1_vtx_0();
	scroll_chaos0_000_displaylist_003_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_006_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_007_mesh_layer_1_vtx_0();
	scroll_chaos0_000_displaylist_004_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_009_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_010_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_011_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_012_mesh_layer_1_vtx_0();
	scroll_chaos0_000_offset_013_mesh_layer_1_vtx_0();
	scroll_chaos0_000_displaylist_005_mesh_layer_1_vtx_0();
}
