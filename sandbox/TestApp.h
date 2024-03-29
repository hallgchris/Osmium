#pragma once

#include <app/App.h>
#include <render/graphics/Shader.h>
#include <render/graphics/VAO.h>
#include <render/graphics/Texture.h>
#include <render/entity/Entity.h>
#include <render/scene/SceneManager.h>
#include <input/Keyboard.h>
#include <render/graphics/Framebuffer.h>
#include <render/graphics/GBuffer.h>

class GLFWwindow;

class TestApp : public os::App, public os::keyboard::KeyEventHandler
{
public:
	void run() override;

	void windowResizeCallback(glm::vec2 dimensions) override;

	void pressKey(uint32_t key) override;

private:
	os::Scene world;
	std::shared_ptr<os::LogicalEntity> mainCamera;
	std::shared_ptr<os::GBuffer> gBuffer;
};
