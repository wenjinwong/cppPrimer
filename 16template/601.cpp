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


template<typename T> T fobj(T, T)
{
	cout<< "T:" << endl;
	return T();
}
template <typename T> T fref(const T&, const T&)
{
	cout<< "T&: " <<endl;
	return T();
}

int main()
{
	string s1("a value");
	const string s2("anthor value");
	fobj(s1, s2);
	fref(s1, s2);
	int a[10], b[43];
	fobj(a, b);
	fref(a, b);
    return 0;
}
