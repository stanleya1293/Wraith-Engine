#ifndef APP_H
#define APP_H
#include "Window.h"

class App {
public:
	App();
	~App();
	void run();
private:
	Window* _window;
};

#endif
