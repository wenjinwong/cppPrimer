#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<numeric>
#include<functional>
#include<sstream>                                                      
#include<set>
#include<map>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>
#include<initializer_list>
#include<functional>
using namespace std;
/*

template<unsigned M, unsigned N> class screen {
public:
	using pos = size_t;
	screen() : height(M), width(N) {}

	friend ostream& operator<<(ostream& os, screen&);
private:
	pos x, y;
	unsigned height, width;
	pos cursor;
};

template<unsigned M, unsigned N>ostream& screen::operator<<(ostream& os, screen& s)
{
	os << s.height << s.width << endl;
	return os;
}
*/

template<int H, int W>
class screen {
public:
	screen() : contents(H * W, ' ') {}
	screen(char c) : contents(H * W, c) {}
	friend class Window_mgr;
	char get() const { return contents[cursor];}
	inline char get(int , int ) const ;
	screen &clear(char = bkground);
private:
	static const char bkground = ' ';
public :
	screen &move(int r, int c);
	screen &set(char);
	scrren &set(int, int, char);
	screeen &display(ostream &os) { do_display(os); return *this;}
	const screen &display(ostream& os) const 
	{do_display(os); return *this;}

private:
	void do_display(std::ostream &os) const { os << contents;}
	int cursor -= 0;
	std::string contents;
};

template<int H, int W>
screen<H, W>& screeen<H, W>::clear(char c)
{
	contents = string(H * w, c);
	return *this;
}
int main()
{
	screen s(100, 102);
	cout << s;
    return 0;
}
