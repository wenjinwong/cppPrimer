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


struct Base {
	Base() : mem(0) {}
protected:
	int mem;
};

struct Derived : Base {
	Derived(int i) : mem(i) {}
	int get_mem()
	//{return mem;}
	{return Base::mem;}
protected:
	int mem;
};



int main()
{
	Derived d(42);
	cout << d.get_mem() << endl;
    return 0;
}
