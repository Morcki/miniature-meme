#pragma once
#include "GameWorld/Texture/TextureBase.h"

namespace GameWorld
{
	class OpenGLTexture2D : public Texture2D
	{
	public:
		OpenGLTexture2D(const std::string path);
		virtual ~OpenGLTexture2D() override;

		virtual GW_INT32 GetWidth()  const override { return width_; };
		virtual GW_INT32 GetHeight() const override { return height_; };

		virtual void Attach(GW_UINT32 slot = 0) const override;

	private:
		GW_UINT32 texture_id_;

		GW_INT32 width_;
		GW_INT32 height_;
		GW_INT32 channels_;

		std::string texture_path_;
	};

}