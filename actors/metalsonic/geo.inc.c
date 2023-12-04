#include "src/game/envfx_snow.h"

const GeoLayout metalsonic_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SHADOW(0, 180, 100),
		GEO_OPEN_NODE(),
			GEO_SCALE(LAYER_FORCE, 16384),
			GEO_OPEN_NODE(),
				GEO_SWITCH_CASE(0, geo_switch_mario_stand_run),
				GEO_OPEN_NODE(),
					GEO_NODE_START(),
					GEO_OPEN_NODE(),
						GEO_SWITCH_CASE(0, geo_switch_mario_cap_effect),
						GEO_OPEN_NODE(),
							GEO_NODE_START(),
							GEO_OPEN_NODE(),
								GEO_ANIMATED_PART(LAYER_OPAQUE, 1, 135, -2, NULL),
								GEO_OPEN_NODE(),
									GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, NULL),
									GEO_OPEN_NODE(),
										GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 39, 0, 0, metalsonic_000_offset_001_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 56, 0, 2, NULL),
												GEO_OPEN_NODE(),
													GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
													GEO_OPEN_NODE(),
														GEO_SWITCH_CASE(0, geo_switch_mario_cap_on_off),
														GEO_OPEN_NODE(),
															GEO_NODE_START(),
															GEO_OPEN_NODE(),
																GEO_SWITCH_CASE(0, geo_switch_mario_eyes),
																GEO_OPEN_NODE(),
																	GEO_NODE_START(),
																	GEO_OPEN_NODE(),
																		GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsonic_000_displaylist_mesh_layer_1),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 150, -189, -133, 15, -33, -133),
														GEO_OPEN_NODE(),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
														GEO_TRANSLATE_ROTATE(LAYER_FORCE, 150, -189, 133, -15, 33, -133),
														GEO_OPEN_NODE(),
															GEO_ROTATION_NODE(LAYER_FORCE, 0, 0, 0),
															GEO_OPEN_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 22, -11, 65, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 1, 0, 0, metalsonic_000_offset_003_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 69, 0, 0, metalsonic_000_offset_004_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(1, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 74, 0, -12, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsonic_000_displaylist_003_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 23, -11, -60, NULL),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, -1, 0, 0, metalsonic_000_offset_006_mesh_layer_1),
													GEO_OPEN_NODE(),
														GEO_ANIMATED_PART(LAYER_OPAQUE, 69, 0, 0, metalsonic_000_offset_007_mesh_layer_1),
														GEO_OPEN_NODE(),
															GEO_SWITCH_CASE(0, geo_switch_mario_hand),
															GEO_OPEN_NODE(),
																GEO_NODE_START(),
																GEO_OPEN_NODE(),
																	GEO_ANIMATED_PART(LAYER_OPAQUE, 85, 0, 13, NULL),
																	GEO_OPEN_NODE(),
																		GEO_SCALE(LAYER_FORCE, 65536),
																		GEO_OPEN_NODE(),
																			GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsonic_000_displaylist_004_mesh_layer_1),
																		GEO_CLOSE_NODE(),
																	GEO_CLOSE_NODE(),
																GEO_CLOSE_NODE(),
															GEO_CLOSE_NODE(),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, -20, -8, 28, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, metalsonic_000_offset_009_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 75, 0, 0, metalsonic_000_offset_010_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 116, 15, 0, metalsonic_000_offset_011_mesh_layer_1),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
										GEO_ANIMATED_PART(LAYER_OPAQUE, -20, -8, -26, NULL),
										GEO_OPEN_NODE(),
											GEO_ANIMATED_PART(LAYER_OPAQUE, 0, 0, 0, metalsonic_000_offset_012_mesh_layer_1),
											GEO_OPEN_NODE(),
												GEO_ANIMATED_PART(LAYER_OPAQUE, 75, 0, 0, metalsonic_000_offset_013_mesh_layer_1),
												GEO_OPEN_NODE(),
													GEO_ANIMATED_PART(LAYER_OPAQUE, 116, 15, 0, NULL),
													GEO_OPEN_NODE(),
														GEO_SCALE(LAYER_FORCE, 65536),
														GEO_OPEN_NODE(),
															GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsonic_000_displaylist_005_mesh_layer_1),
														GEO_CLOSE_NODE(),
													GEO_CLOSE_NODE(),
												GEO_CLOSE_NODE(),
											GEO_CLOSE_NODE(),
										GEO_CLOSE_NODE(),
									GEO_CLOSE_NODE(),
								GEO_CLOSE_NODE(),
							GEO_CLOSE_NODE(),
						GEO_CLOSE_NODE(),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_OPAQUE, metalsonic_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
