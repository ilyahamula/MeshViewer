#include "OpenglRenderSystem.h"

void OpenglRenderSystem::init()
{
}

void OpenglRenderSystem::clearDisplay(float r, float g, float b)
{
}

void OpenglRenderSystem::setViewport(double x, double y, double width, double height)
{
}

void OpenglRenderSystem::renderTriangleSoup(const std::vector<Vertex>& vertices)
{
}

void OpenglRenderSystem::renderLines(const std::vector<Vertex>& vertices)
{
}

void OpenglRenderSystem::setupLight(uint32_t index, glm::vec3 position, glm::vec3 Ia, glm::vec3 Id, glm::vec3 Is)
{
}

void OpenglRenderSystem::turnLight(uint32_t index, bool enable)
{
}

void OpenglRenderSystem::setWorldMatrix(const glm::mat4& matrix)
{
}

const glm::mat4& OpenglRenderSystem::getWorldMatrix() const
{
    return worldMatrix;
}

void OpenglRenderSystem::setViewMatrix(const glm::mat4& matrix)
{
}

const glm::mat4& OpenglRenderSystem::getViewMatrix() const
{
    return viewMatrix;
}

void OpenglRenderSystem::setProjMatrix(const glm::mat4& matrix)
{
}

const glm::mat4& OpenglRenderSystem::getProjMatrix() const
{
    return projMatrix;
}
