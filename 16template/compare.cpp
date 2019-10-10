#include<iostream>
#include<cctype>
#include<string>
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
#include<cstring>

template<typename T>int compare(const T&, const T&)
{
	cout << "&&" <<endl;
}

template<size_t N, size_t M> int compare(const char (&)[N],
		const char (&)[M])
{
	cout << "& M n" << endl;
}
template<> int compare(const char* const &p1, const char* const &p2)
{
	string s = "char p" ;
	cout << s  << endl;
	return strcmp(p1, p2);
}

template<> int compare(int const &p1, int const &p2)
{
	cout  << " int" << endl;
	return p1 < p2;
}


int main()
{
	compare(5,6);
	char* p = "hfad", *pp = "affa";
	compare(p,pp);
	compare("hi", "mom");	
    return 0;
}
