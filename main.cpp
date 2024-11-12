#include "OpenglWindow.h"
#include "OpenglRenderSystem.h"

#include <glm/gtc/matrix_transform.hpp>

void renderScene(OpenglRenderSystem& rs)
{

}

void moveCube(OpenglRenderSystem& rs, glm::vec3 offset)
{
	
}

int main()
{
	OpenglRenderSystem rs;
	OpenglWindow window("myWindow", 640, 480);

	window.setKeyCallback([&rs](KeyCode key, Action action, Modifier mods)
	{
		if (key == KeyCode::UP)
			moveCube(rs, {});

		if (key == KeyCode::DOWN)
			moveCube(rs, {});

		if (key == KeyCode::LEFT)
			moveCube(rs, {});

		if (key == KeyCode::RIGHT)
			moveCube(rs, {});
	});

	rs.init();
	rs.setupLight(0, glm::vec3{ 0,5,0 }, glm::vec3{ 1,0,0 }, glm::vec3{ 0,1,0 }, glm::vec3{ 0,0,1 });
	rs.turnLight(0, true);

	glm::mat4 viewMatrix = glm::lookAt(glm::vec3(0.0f, 0.0f, -10.0f), glm::vec3(0.0f, 0.0f, 0.0f), glm::vec3(0.0f, 1.0f, 0.0f));
	rs.setViewMatrix(viewMatrix);

	glm::mat4 projMatrix = glm::perspective(glm::radians(60.0f), 640.0f / 480.0f, 0.1f, 500.f);
	rs.setProjectionMatrix(projMatrix);

	while (!glfwWindowShouldClose(window.getGLFWHandle()))
	{
		rs.setViewport(0, 0, window.getWidth(), window.getHeight());
		rs.clearDisplay(0.5f, 0.5f, 0.5f);
		renderScene(rs);
		glfwSwapBuffers(window.getGLFWHandle());
		glfwWaitEvents();
	}

    return 0;
}
