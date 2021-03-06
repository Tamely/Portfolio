#pragma once

#include "Walnut/Image.h"
#include <memory>
#include <glm/vec2.hpp>

class Renderer
{
public:
	Renderer() = default;

	void OnResize(uint32_t width, uint32_t height);
	void Render();
	std::shared_ptr<Walnut::Image> GetFinalImage();
private:
	uint32_t PerPixel(glm::vec2 coord);
private:
	uint32_t* m_ImageData = nullptr;
	std::shared_ptr<Walnut::Image> m_FinalImage;
};
