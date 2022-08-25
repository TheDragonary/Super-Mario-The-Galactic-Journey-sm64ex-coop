#include "custom.model.inc.h"

const GeoLayout bowser_bomb_geo[]= {
	GEO_CULLING_RADIUS(1000),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 196608),
		GEO_OPEN_NODE(),
			GEO_DISPLAY_LIST(1, DL_bowser_bomb_geo_0x605ab10),
			GEO_BILLBOARD_WITH_PARAMS(0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_DISPLAY_LIST(4, DL_bowser_bomb_geo_0x605a980),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};