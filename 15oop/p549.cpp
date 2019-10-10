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
	int memfcn() { return 1;}
};

struct Derived : Base {
	int memfcn(int) { return 0;}
};

int main()
{
	Derived d; Base b;
	b.memfcn();
	d.memfcn(10);
	//d.memfcn();
	d.Base::memfcn();
    return 0;
}
