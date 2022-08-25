#include "custom.model.inc.h"

const GeoLayout Geo_bowser_2_1_0x3881700[]= {
	GEO_NODE_SCREEN_AREA(10, 160, 120, 160, 120),
	GEO_OPEN_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_NODE_ORTHO(100),
			GEO_OPEN_NODE(),
				GEO_BACKGROUND_COLOR(0),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(1),
		GEO_OPEN_NODE(),
			GEO_CAMERA_FRUSTUM_WITH_FUNC(45, 100, 38550, geo_camera_fov),
			GEO_OPEN_NODE(),
				GEO_CAMERA(1, 0, 2000, 6000, 3072, 0, 60928,  geo_camera_main),
				GEO_OPEN_NODE(),
					GEO_DISPLAY_LIST(1, DL_bowser_2_1_0xe0040e0),
					GEO_RENDER_OBJ(),
					GEO_ASM(13,  geo_envfx_main),
					GEO_ASM(20480,  geo_movtex_draw_water_regions),
				GEO_CLOSE_NODE(),
			GEO_CLOSE_NODE(),
		GEO_CLOSE_NODE(),
		GEO_ZBUFFER(0),
		GEO_OPEN_NODE(),
			GEO_ASM(0,  geo_cannon_circle_base),
		GEO_CLOSE_NODE(),
	GEO_CLOSE_NODE(),
	GEO_END(),
};