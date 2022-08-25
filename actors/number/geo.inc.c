#include "custom.model.inc.h"

const GeoLayout number_geo[]= {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SWITCH_CASE(10,  geo_switch_anim_state),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011ed8),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011f08),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011f38),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011f68),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011f98),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011fc8),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2011ff8),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2012028),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2012058),
			GEO_DISPLAY_LIST(4, DL_number_geo_0x2012088),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};