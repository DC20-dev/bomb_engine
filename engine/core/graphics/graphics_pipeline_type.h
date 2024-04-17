#pragma once

#include <cstdint>

namespace bomb_engine
{
	enum class E_GRAPHICS_PIPELINE_TYPE : uint8_t
	{
		TYPE_PRIMITIVE_SHADING = 0,
		TYPE_MESH_SHADING
	};
}