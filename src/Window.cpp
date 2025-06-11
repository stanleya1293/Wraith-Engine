#include "Window.h"


Window::Window() : 
	_width(DEFAULT_WIN_WIDTH), _height(DEFAULT_WIN_HEIGHT), 
	_title(DEFAULT_WIN_TITLE) {
	glfwInit();
		
}

Window::Window(int width, int height, const std::string &title) : 
	_width(width), _height(height), _title(title) {
	
}
