#ifndef WINDOW_H
#define WINDOW_H
#include <string>
#include <GLFW/glfw3.h>

#define DEFAULT_WIN_WIDTH 1000
#define DEFAULT_WIN_HEIGHT 800
#define DEFAULT_WIN_TITLE "Wraith - Game Engine"

class Window {
public:
	Window();
	Window(int width, int height, const std::string &title);

private:
	int _width;
	int _height;
	std::string _title;
};

#endif
