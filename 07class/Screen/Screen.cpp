#include"Screen.h"

char Screen::get(pos ht, pos wd) const 
{
	return contents[ht * width + wd];
}

Screen& Screen::move(pos r, pos c) 
{
	cursor = r * width + c;
	return *this;
}

inline 
int Screen::count() const
{
	cnt++;
	return cnt;
}

int main()
{
	Screen sc(100, 100, 'c');
	std::cout << sc.get(50, 50);
	sc.move(90, 90);
	std::cout << "\n" << sc.count() << "\n";
	Window_mgr w;

	return 0;
}
