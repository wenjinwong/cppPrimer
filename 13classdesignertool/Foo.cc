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

class Foo {
public:
	Foo &operator=(const Foo&) &;
	Foo retval() &&;
	Foo &retfoo() &;
};
Foo &Foo::operator=(const Foo& rhs) &
{
	return *this;
}
Foo Foo::retval() &&
{
	return *this;
}

Foo& Foo::retfoo() &
{
	return *this;
}

int main()
{
	Foo i, j;
	i = j;
//	i.retval() = j;
	i.retfoo() = j;
	i = i.retfoo();
    return 0;
}
