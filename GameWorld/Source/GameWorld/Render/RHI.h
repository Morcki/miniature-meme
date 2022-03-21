#pragma once

/*
   Render Hardware API Interface Header File
*/

#include "glm/glm.hpp"
#include "RenderArray.h"

namespace GameWorld
{
	enum class RenderAPIType
	{
		kNone   = 0,
		kOpenGl = 1,
	};

	class RHI
	{
	public:
		virtual ~RHI() = default;

		virtual void SetClearColor(glm::vec4 color) = 0;
		virtual void ClearBuffer() = 0;

		virtual void DrawElements(const Ref<RenderArray>& vertex_array, GW_UINT32 index_count = 0) = 0;

		static RenderAPIType GetAPIType() { return render_api_; }

		static RHI* CreateRHI();

	private:
		static RenderAPIType render_api_;
	};
}



