#include "custom.model.inc.h"

const GeoLayout clam_shell_geo[]= {
	GEO_NODE_START(),
	GEO_OPEN_NODE(),
		GEO_SCALE(0, 16384),
		GEO_OPEN_NODE(),
			GEO_ANIMATED_PART(1, 0, 0, 0, 0),
			GEO_OPEN_NODE(),
				GEO_ANIMATED_PART(1, 0, 0, 0, DL_clam_shell_geo_0x5001568),
				GEO_OPEN_NODE(),
					GEO_ANIMATED_PART(1, 65016, 65530, 0, 0),
					GEO_OPEN_NODE(),
						GEO_ANIMATED_PART(1, 0, 0, 0, DL_clam_shell_geo_0x50012b8),
					GEO_CLOSE_NODE(),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};