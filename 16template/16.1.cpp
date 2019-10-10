#include<cstring>
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
/*
int compare(const string &v1, const string &v2)
{
	if(v1 < v2) return -1;
	if(v2 < v1) return  1;
	return				0;
}
int compare(const double &v1, const double &v2)
{
	if(v1 < v2) return -1;
	if(v2 < v1) return  1;
	return				0;
}
*/
template <class TT,typename T>
int compare(const TT& v1, const T& v2)
{
	if(v1 < v2) return -1;
	if(v2 < v1) return  1;
	return				0;
}

template<unsigned N, unsigned M>
int compared(const char(&p1)[N], const char (&p2)[M])
{
	return strcmp(p1, p2);
}

int main()
{
	cout << compare(8, 5) << endl;
	cout << compared("hhh", "afadsf") << endl;
    return 0;
}
