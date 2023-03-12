#pragma once
#include <glad/glad.h>
#include <GLFW/glfw3.h>
#include <iostream>
#include "Scene.h"

namespace Graphics_Engine {

	class Window
	{

	public:

		static Window* main;

		//fields
		Scene scene = Scene();
 
		//The OpenGL Window Context
		GLFWwindow* window;

		//functions

		//Creates and initializes a new window
		static Window* CreateWindow();

		//Starts the application loop
		void StartApplication();

		~Window();

		ivec2 Resolution();
		void Resolution(ivec2 res);


		//Helpers 


		float GetTime();
		float DeltaTime();
	private:
		ivec2 _resolution;

		//Called whenever the window is resized	
		void framebuffer_size_callback(GLFWwindow* window, int width, int height);
		void OnWindowInput();
		float lastTime = 0;
	};



}


