# Vulkan Environment in Visual Studio
This is merely a quick reference guide that will help you set up a Vulkan template for Visual Studio. If you have never done this before, a more detailed and comprehensive guide can be found [here][1], and it is also the main guide which this one is based upon.

# Requirements
It is assumed that you already have [Visual Studio 2017][2] installed on your system, as well as [Vulkan SDK][3]. It is also assumed that your hardware has Vulkan support and your drivers are up to date. We will use [GLFW utility library][4] and the [GLM mathematics library][5].

# Configuring Visual Studio

An empty Visual C++ ``Windows Desktop Application`` (In older versions of Visual Studio this was called ``Win32 Project``) will be used as the base for setting up a Vulkan template.


# Removing Templates

Removing a template from Visual Studio 2017 is done by deleting a template inside the ``ProjectTemplatesCache`` folder. Full path to this folder is located at ``%APPDATA%\Microsoft\VisualStudio\<version_ID>\ProjectTemplatesCache``



[1]: https://vulkan-tutorial.com/Development_environment "Development Environment - Vulkan Tutorial"
[2]: https://www.visualstudio.com/vs/ "Visual Studio IDE"
[3]: https://vulkan.lunarg.com/ "LunarXchange"
[4]: http://www.glfw.org/download.html "GLFW - Download"
[5]: https://glm.g-truc.net/0.9.8/index.html "OpenGL Mathematics"
