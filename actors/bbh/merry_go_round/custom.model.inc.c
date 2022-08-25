#include "custom.model.inc.h"
Vtx VB_geo_bbh_000640_0x7020070[] = {
	{{{ -204, 0, -204 }, 0, { 0, 0 }, { 0, 56, 143, 255}}},
	{{{ 0, 410, 0 }, 0, { 480, 784 }, { 0, 56, 143, 255}}},
	{{{ 205, 0, -204 }, 0, { 990, 0 }, { 0, 56, 143, 255}}},
	{{{ -204, 0, 205 }, 0, { 990, 0 }, { 143, 56, 0, 255}}},
	{{{ 0, 410, 0 }, 0, { 478, 784 }, { 143, 56, 0, 255}}},
	{{{ -204, 0, -204 }, 0, { 0, 0 }, { 143, 56, 0, 255}}},
	{{{ 205, 0, -204 }, 0, { 0, 0 }, { 113, 56, 0, 255}}},
	{{{ 0, 410, 0 }, 0, { 478, 784 }, { 113, 56, 0, 255}}},
	{{{ 205, 0, 205 }, 0, { 990, 0 }, { 113, 56, 0, 255}}},
	{{{ 205, 0, 205 }, 0, { 990, 0 }, { 0, 56, 113, 255}}},
	{{{ 0, 410, 0 }, 0, { 480, 784 }, { 0, 56, 113, 255}}},
	{{{ -204, 0, 205 }, 0, { 0, 0 }, { 0, 56, 113, 255}}},
};

Vtx VB_geo_bbh_000640_0x7020130[] = {
	{{{ 1434, 0, -1433 }, 0, { 4056, 2164 }, { 0, 127, 0, 255}}},
	{{{ 205, 0, -204 }, 0, { 990, 284 }, { 0, 127, 0, 255}}},
	{{{ 205, 0, 205 }, 0, { 0, 284 }, { 0, 127, 0, 255}}},
	{{{ 205, 0, 205 }, 0, { 990, 284 }, { 0, 127, 0, 255}}},
	{{{ -1433, 0, 1434 }, 0, { -3096, 2164 }, { 0, 127, 0, 255}}},
	{{{ 1434, 0, 1434 }, 0, { 4056, 2164 }, { 0, 127, 0, 255}}},
	{{{ -204, 0, 205 }, 0, { 0, 284 }, { 0, 127, 0, 255}}},
	{{{ -1433, 0, 1434 }, 0, { 4056, 2164 }, { 0, 127, 0, 255}}},
	{{{ -204, 0, -204 }, 0, { 0, 284 }, { 0, 127, 0, 255}}},
	{{{ -1433, 0, -1433 }, 0, { -3096, 2164 }, { 0, 127, 0, 255}}},
	{{{ -204, 0, 205 }, 0, { 990, 284 }, { 0, 127, 0, 255}}},
	{{{ -1433, 0, -1433 }, 0, { 4056, 2164 }, { 0, 127, 0, 255}}},
	{{{ 205, 0, -204 }, 0, { 0, 284 }, { 0, 127, 0, 255}}},
	{{{ 1434, 0, -1433 }, 0, { -3096, 2164 }, { 0, 127, 0, 255}}},
	{{{ -204, 0, -204 }, 0, { 990, 284 }, { 0, 127, 0, 255}}},
	{{{ 1434, 0, 1434 }, 0, { -3096, 2164 }, { 0, 127, 0, 255}}},
};

Light_t Light_geo_bbh_000640_0x7020060 = {
	{ 255, 255, 255}, 0, { 255, 255, 255}, 0, { 40, 40, 40}, 0
};

Ambient_t Light_geo_bbh_000640_0x7020058 = {
	{102, 102, 102}, 0, {102, 102, 102}, 0
};

Gfx DL_geo_bbh_000640_0x70202f0[] = {
	gsDPPipeSync(),
	gsDPSetCombineLERP(TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE, TEXEL0, 0, SHADE, 0, 0, 0, 0, SHADE),
	gsSPGeometryMode(G_SHADING_SMOOTH, 0),
	gsDPSetTile(0, 2, 0, 0, 7, 0, 0, 0, 0, 0, 0, 0),
	gsSPTexture(65535, 65535, 0, 0, 1),
	gsDPTileSync(),
	gsDPSetTile(0, 2, 8, 0, 0, 0, 2, 6, 0, 0, 5, 0),
	gsDPSetTileSize(0, 0, 0, 124, 252),
	gsSPDisplayList(DL_geo_bbh_000640_0x7020230),
	gsSPDisplayList(DL_geo_bbh_000640_0x7020288),
	gsSPTexture(65535, 65535, 0, 0, 0),
	gsDPPipeSync(),
	gsDPSetCombineLERP(0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE, 0, 0, 0, SHADE),
	gsSPGeometryMode(0, G_SHADING_SMOOTH),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000640_0x7020230[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bbh_000640__texture_09005000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPLight(&Light_geo_bbh_000640_0x7020060.col, 1),
	gsSPLight(&Light_geo_bbh_000640_0x7020058.col, 2),
	gsSPVertex(VB_geo_bbh_000640_0x7020070, 12, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(6, 7, 8, 0, 9, 10, 11, 0),
	gsSPEndDisplayList(),
};

Gfx DL_geo_bbh_000640_0x7020288[] = {
	gsDPSetTextureImage(0, 2, 1, geo_bbh_000640__texture_07000000),
	gsDPLoadSync(),
	gsDPLoadBlock(7, 0, 0, 2047, 256),
	gsSPVertex(VB_geo_bbh_000640_0x7020130, 16, 0),
	gsSP2Triangles(0, 1, 2, 0, 3, 4, 5, 0),
	gsSP2Triangles(3, 6, 4, 0, 7, 8, 9, 0),
	gsSP2Triangles(7, 10, 8, 0, 11, 12, 13, 0),
	gsSP2Triangles(11, 14, 12, 0, 0, 2, 15, 0),
	gsSPEndDisplayList(),
};

