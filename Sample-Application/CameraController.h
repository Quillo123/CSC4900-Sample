#pragma once
#include <GraphicsEngine/SceneObject.h>
#include <GraphicsEngine/Camera.h>

using namespace Graphics_Engine;

class CameraController : public SceneObject
{
public:
	Camera* camera;

	float speed = 200;
	float rotationSpeed = 100;
	vec3 inputDir = vec3(0, 0, 0);

	void Start() override;
	void Update() override;
	SceneObject* Copy() override;

};

