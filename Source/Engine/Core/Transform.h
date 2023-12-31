#pragma once
#include "Vector2.h"

namespace kiko {
	class Transform
	{
	public:
		vec2 position;
		float rotation = 0;
		float scale = 1;
	public:
		Transform(const vec2& position, float rotation, float scale) :
			position{ position },
			rotation{ rotation },
			scale{ scale }
		{}

	};
}