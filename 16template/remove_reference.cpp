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


template<class T>
struct remove_reference {
	typedef T type;
};
/*
template<class T> struct remove_reference
{ typedef T& type;};

*/


/*
template<class T>
struct remove_reference<T&>
{ typedef T type; };

template<class T>
struct remove_reference<T&&>
{ typedef T type; };

*/
template<typename T>struct Foo {
	Foo(const T &t = T()) : mem(t) {}
	void Bar() {;}
	T mem;
};

template<> void Foo<int>::Bar()
{
	;
}


int main()
{
	int i;
	Foo<string> fs;
	fs.Bar();
	Foo<int> fi;
	fi.Bar();
/*
	remove_reference<decltype(42)>>::type a;
	remove_reference<decltype(i)>>::type b;
	remove_reference<decltype(std::move(i))>>::type c;
  */
	return 0;
}
