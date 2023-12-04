#include "src/game/envfx_snow.h"

const GeoLayout lakitu_cameraman_000_switch_opt1[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
	GEO_CLOSE_NODE(),
	GEO_RETURN(),
};
const GeoLayout lakitu_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 150, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_000_offset_001_mesh_layer_1),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 132, 0, 0, lakitu_cameraman_000_offset_002_mesh_layer_1),
						GEO_OPEN_NODE(),
							GEO_SWITCH_CASE(2, geo_switch_anim_state),
							GEO_OPEN_NODE(),
								GEO_NODE_START(),
								GEO_OPEN_NODE(),
								GEO_CLOSE_NODE(),
								GEO_BRANCH(1, lakitu_cameraman_000_switch_opt1),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 18, 72, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_000_offset_003_mesh_layer_1),
						GEO_CLOSE_NODE(),
						GEO_ANIMATED_PART(LAYER_OPAQUE, 87, 18, -72, NULL),
						GEO_OPEN_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_000_offset_004_mesh_layer_1),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 334, -214, -50, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_000_offset_006_mesh_layer_1),
									GEO_OPEN_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, 191, 0, 0, lakitu_cameraman_000_offset_007_mesh_layer_1),
									GEO_CLOSE_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_002_offset_001_mesh_layer_1),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
							GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, lakitu_cameraman_002_offset_002_mesh_layer_1),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, lakitu_cameraman_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
