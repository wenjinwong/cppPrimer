#ifndef WINDOW_MGR
#define WINDOW_MGR
#include"Screen.h"

class Window_mgr{
private:
	std::vector<Screen> screens{Screen(24, 80, ' ')};

};

#endif
