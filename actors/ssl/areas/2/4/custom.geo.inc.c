#include "custom.model.inc.h"

const GeoLayout ssl_geo_0005D8[]= {
	GEO_CULLING_RADIUS(2000),
	GEO_OPEN_NODE(),
		GEO_RENDER_RANGE(64536, 4000),
		GEO_OPEN_NODE(),
			GEO_ASM(2050,  geo_movtex_draw_colored_2_no_update),
		GEO_CLOSE_NODE(),
		GEO_RENDER_RANGE(4000, 12800),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, DL_ssl_geo_0005D8_0x7004ae0),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};