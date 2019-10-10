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



struct b{
	string s = "b";
	b(string m) : s(m) {}
	virtual void f() {cout << s << endl;}
};

struct bb : b {
	string s = "bb";
	bb(string m) :b(m) {}
	virtual void f() {cout << "bb" << endl;}
};

struct c{
	virtual void ff(string s ="base")
	{
		cout << s <<endl;
	}
};

struct cc : public c{
	virtual void ff(string s = "derived")
	{
		cout << s << endl;
	}
};

int main() {
	bb bbb("bb");
	bbb.f();
	b bbbb("b");
	bbbb.f();
	cc c2;
	c c1;
	cc & c3 = c2;
	c3.ff();
	c3.c::ff();
}
