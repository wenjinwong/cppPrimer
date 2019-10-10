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

class Tiny{
	public:
		string t;
		Tiny(const string& s)
		{
			t = s;
		}
		friend void swap(Tiny& lhs, Tiny& rhs);
};

void swap(Tiny& lhs, Tiny& rhs)
{
	cout << "swap " << endl;
	string tmp = rhs.t;
	rhs.t = lhs.t;
	lhs.t = tmp;
}

class Foo {
public:
	string *s;
	Tiny ti;
	Foo(const string& t, const string& tti) : ti(tti)
	{
		s = new string(t);
	}
	~Foo()
	{
		delete s;
	}
	Foo& operator=(Foo rhs)
	{
		swap(*this, rhs);
		return *this;
	}
	friend void swap(Foo& lhs, Foo& rhs);
};

void swap(Foo& lhs, Foo& rhs)
{
	std::swap(lhs.s, rhs.s);
	swap(lhs.ti, rhs.ti);
}



int main()
{
	Foo f1("f1", "f1ti");
	Foo f2("f2", "f2ti");
	swap(f1, f2);
	cout << *f1.s << "  " << *f2.s << endl;
	f2 = f1;
    return 0;
}
