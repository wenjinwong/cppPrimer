#ifndef SCREEN_H
#define SCREEN_H
#include<iostream>
#include<cctype>
#include<string>
#include<vector>
class Screen;

class Screen {
public:
	using pos = std::string::size_type; 
	Screen() = default;

	Screen(pos ht, pos wd, char c) : height(ht), width(wd), contents(ht * wd,
			c) {}
	char get() const { return contents[cursor];}
	char get(pos ht, pos wd) const;
	Screen& move(pos r, pos c);
	int count() const;
	friend class Window_mgr;
private:
	mutable int cnt = 0;
	pos cursor = 0;
	pos height = 0, width = 0;
	std::string contents;
};

class Window_mgr{
private:
    std::vector<Screen> screens{Screen(24, 80, ' ')};

public:
	using ScreenIndex = std::vector<Screen>::size_type;
	void clear(int ind);
};

void Window_mgr::clear(int ind)
{
		Screen &s = screens[ind];
		s.contents = std::string(s.height * s.width, ' ');
}
#endif
