#include "src/game/envfx_snow.h"

const GeoLayout reticle_geo[] = {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(7, geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_NODE_START(),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, reticle_000_displaylist_mesh_layer_7),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_DISPLAY_LIST(LAYER_TRANSPARENT_INTER, reticle_material_revert_render_settings),
	GEO_CLOSE_NODE(),
	GEO_END(),
};
