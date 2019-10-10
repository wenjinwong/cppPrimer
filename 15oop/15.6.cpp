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


class Base {
public:
	void ff(int i) { cout << i << endl; }
	virtual int fcn() {cout << "base" << endl; }
	void ff() { cout << "Base f" << endl; }
};

class D1 : public Base {
public:
	using Base::ff;
	int fcn(int i) { cout << "d1" << endl; }
	void ff() { cout << "d1 f" <<endl; }
};

int main()
{
	Base b;
	D1 d;
	d.fcn(10);
	b.fcn();
	Base &bd = d;
	bd.fcn();
	d.ff();
	b.ff();
	Base *bbb = &d;
	bbb->fcn();
    return 0;
}
