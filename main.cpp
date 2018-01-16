#define GLFW_INCLUDE_VULKAN

#include <GLFW/glfw3.h>
#include <glm/matrix.hpp>
#include <iostream>

const int WIDTH = 800;
const int HEIGHT = 600;

class VulkanProgram
{
public:
	void run()
	{
		init_window();
		init_vulkan();
		main_loop();
		cleanup();
	}

private:
	GLFWwindow * window;

	void init_window()
	{
		glfwInit();

		glfwWindowHint(GLFW_CLIENT_API, GLFW_NO_API);

		window = glfwCreateWindow(WIDTH, HEIGHT, "Vulkan", nullptr, nullptr);
	}

	void init_vulkan()
	{

	}

	void main_loop()
	{
		while (!glfwWindowShouldClose(window))
		{
			glfwPollEvents();
		}
	}

	void cleanup()
	{
		glfwDestroyWindow(window);
		glfwTerminate();
	}
};

void vulkan_glm_test();

int main() {

	VulkanProgram program;

	vulkan_glm_test();

	try
	{
		program.run();
	}
	catch (const std::runtime_error& e) {
		std::cerr << e.what() << std::endl;
		return EXIT_FAILURE;
	}

	return EXIT_SUCCESS;
}

// ------------- TEST METHOD FOR VULKAN AND GLM INSTALLATIONS -------------
// Vulkan SDK and drivers are installed properly if extension_count returns a non-zero value
// GLFW and GLM are working if there are no errors during compilation
// This testing function can be safely deleted upon successful compilation and non-zero result

void vulkan_glm_test()
{
	uint32_t extension_count = 0;
	vkEnumerateInstanceExtensionProperties(nullptr, &extension_count, nullptr);
	std::cout << extension_count << " extensions supported." << "\n";

	glm::vec3 vector = glm::vec3(1.0, 2.0, 3.0);
	float vector_length = glm::length(vector);

	std::cout << vector_length << "\n";
}