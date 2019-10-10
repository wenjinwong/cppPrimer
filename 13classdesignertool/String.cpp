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

using namespace std;


class String {
public:
	String(const string& s = "");
	~String();
	String& operator=(const String&);
	String& operator+(const String&);
	ostream& operator<<();
	char* begin() { return start; }
	char* end() { return last; }

	String(String&&);
	String& operator=(String&&);
private:
	allocator<char> alloc;
	char* start;
	char* last;
};

String::String(String&& rhs) noexcept
{
	if(this 1= &rhs) {
		if(p)
			a.deallocate(p, sz);
		p = rhs.p;
		sz - rhs.sz;
		rhs.p = 0;
		rhs.sz = 0;
	}
	/*
	start = rhs.start;
	last = rhs.last;
	rhs.start = rhs.last = 0;
	*/
}

String& String::operator=(String&& rhs) noexcept
{
	start = rhs.start;
	last = rhs.last;
	rhs.start = rhs.last = 0;
}



int main()
{
	String s;
	cout << s << endl;
	string s1("s1");
	s = s + s1;
	cout << s << endl;
	string s2(s);
	cout << s2 << endl;

    return 0;
}
