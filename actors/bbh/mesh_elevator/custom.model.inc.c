#include "custom.model.inc.h"
Vtx VB_geo_bbh_000628_0x701fdb8[] = {
	{{{ -306, 0, 256 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, 256 }, 0, { 6100, 990 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, 256 }, 0, { 6100, 0 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, 256 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, 256 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, -255 }, 0, { -4118, 990 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, -255 }, 0, { -4118, 0 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, -255 }, 0, { 6100, 0 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, -255 }, 0, { 6100, 990 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, -255 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, -255 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, -255 }, 0, { -4118, 0 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, -255 }, 0, { -4118, 990 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, 256 }, 0, { 990, 990 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, 256 }, 0, { 990, 0 }, { 255, 255, 255, 255}}},
};

Vtx VB_geo_bbh_000628_0x701fea8[] = {
	{{{ 307, -101, 256 }, 0, { -2074, -3608 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, 256 }, 0, { 4056, -3608 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, -255 }, 0, { 4056, 1500 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, 256 }, 0, { 0, 0 }, { 255, 255, 255, 255}}},
	{{{ -306, -101, 256 }, 0, { 0, 990 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, 256 }, 0, { 6100, 990 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, -255 }, 0, { 4056, 1500 }, { 255, 255, 255, 255}}},
	{{{ -306, 0, 256 }, 0, { 4056, -3608 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, 256 }, 0, { -2074, -3608 }, { 255, 255, 255, 255}}},
	{{{ 307, 0, -255 }, 0, { -2074, 1500 }, { 255, 255, 255, 255}}},
	{{{ 307, -101, -255 }, 0, { -2074, 1500 }, { 255, 255, 255, 255}}},
};

Gfx DL_geo_bbh_000628_0x701ffe8[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0, TEXEL0, 0, SHADE, 0),
	gsSPGeometryMode(G_CULL_BACK|G_LIGHTING, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 0, 5, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 124),
	gsSPDisplayList(DL_geo_bbh_000628_0x701ff58),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_CULL_BACK|G_LIGHTING),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000628_0x701ff58[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bbh_000628__texture_09000000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 1023, 256),
	gsSPVertex(VB_geo_bbh_000628_0x701fdb8, 15, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 5, 6, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 9, 10, 0, 11, 12, 13, 0),
	gsSP1Triangle(11, 13, 14, 0),
	gsSPVertex(VB_geo_bbh_000628_0x701fea8, 11, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 6, 8, 9, 0),
	gsSP1Triangle(10, 0, 2, 0),
	gsSPEndDisplayList(),
};

