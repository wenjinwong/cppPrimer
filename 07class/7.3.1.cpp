#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

class Screen
{
public:
	typedef std::string::size_type pos;

	Screen() = default;
	Screen(pos h, pos w, char c) : height(h), width(w), contents(h * w, c) {}
	Screen(pos h, pos w) : height(h), width(w), contents(h * w, ' ') {}
	Screen& set(char);
	Screen& set(pos, pos, char);
	void showPos() const
	{
		std::cout << " pos : " << cursor << "   " ;
	}

	Screen& move(pos h, pos w)
	{
		cursor = h * width + w;
	}

	void do_display(std::ostream& os) const { os << contents; }
	
	const Screen& display(std::ostream& os) const
	{
		do_display(os); return *this;
	}

	Screen& display(std::ostream& os)
	{
		do_display(os); return *this;
	}

private:
	pos height = 0, width = 0;
	std::string contents;
	pos cursor = 0;
};

inline Screen& Screen::set(char c)
{
	contents[cursor] = c;
	return *this;
}

inline
Screen& Screen::set(pos h, pos w, char c)
{
	contents[ h * width + w] = c;
	return *this;
}



int main()
{
	Screen s(100, 100, ' ');
	s.showPos();
	s.move(88, 88);
	s.showPos();

	Screen myScreen(5, 5, 'X');
	myScreen.move(4, 0).set('#').display(cout);
	std::cout << std::endl;
	myScreen.display(cout);

}
