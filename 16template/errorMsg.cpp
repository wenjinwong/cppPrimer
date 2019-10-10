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
void debug(T t)
{
	cout <<"debug: "<< t << endl;
}


template<class T>
void print(ostream& os, T t)
{
	return os << "debug: " << t << endl;
}


template<class A, class... Args>
void print(ostream& os, A a, Args... rest)
{
	os <<"print: " << a <<endl;
	print(os, rest...);
}

template<typename T, typename... Args>
void errorMsg(ostream& os, Args... args)
{
	print(os,debug(args)...);
}

int main()
{
	errorMsg(cout,54,45345,43,543);
    return 0;
}
