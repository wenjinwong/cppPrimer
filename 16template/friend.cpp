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
class Foo;
template<typename Type>class Bar {
	friend Type;
	void ff() { cout << "bar" << endl;}
};


class Foo {
	public:
	void f() { cout << "Foo" << endl;}
	Bar<Foo> bb;
	void bbf() { bb.ff();}
};

int main()
{
	Bar<Foo> bf;
	Foo ff;
	ff.bbf();
    return 0;
}
