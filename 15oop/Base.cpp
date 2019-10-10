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

class Base{
public:
	size_t size() const { return n;}

protected:
	size_t n = 9;
};

class Derived : private Base {
public:
	using Base::size;
	void f() { cout << n << endl; }
protected:
	using Base::n;
};

int main()
{
	Derived dd;
	dd.f();
	dd.size();
    return 0;
}
