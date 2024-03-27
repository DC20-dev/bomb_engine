from conan import ConanFile
from conan.tools.cmake import cmake_layout, CMake

class BombEngineRecipe(ConanFile):
    settings = "os", "compiler", "build_type", "arch"
    generators = "CMakeToolchain", "CMakeDeps"
    build_policy = "missing"
    requires = "glfw/3.4", "glm/0.9.9.8", #"nuklear/4.10.1", "assimp/5.2.2", "fmt/10.0.0", "clove-unit/2.4.0"
    
    def layout(self):
        cmake_layout(self)

    def build(self):
        cmake = CMake(self)
        cmake.configure()
        cmake.build()