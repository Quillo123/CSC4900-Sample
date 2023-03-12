#pragma once

#include <GraphicsEngine/Material.h>
#include <GraphicsEngine/Texture.h>

namespace Graphics_Engine {

	class MeshMaterial : public Material
	{
	public:
		MeshMaterial(Shader* shader);
		MeshMaterial(Shader* shader, Texture tex);

		void Use() override;

		Texture texture;


	};
}