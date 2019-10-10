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
using namespace std;


template<typename T> string debug_rep(const T& t)
{
	ostringstream ret;
	ret << t;
	return ret.str();
}

template<typename T>string debug_rep(T *p)
{
	ostringstream ret;
	ret << "pointer: " << p;
	if(p)
		ret << " " << debug_rep(*p);
	else
		ret << " null pointer";
	return ret.str();
}

string debug_rep(const string &s)
{
	return '"' + s + '"';
}

string debug_rep(char *p)
{
	cout << "char* p" << endl;
	return debug_rep(string(p));
}
/*
   string debug_rep(const char* p)
{
	cout << "const char* p" << endl;
	return debug_rep(string(p));
}
*/
int main() 
{
	string s1("hi");
	string* ss = new string(10, 'g');
	cout << debug_rep(ss) << endl;
	cout << debug_rep(s1) << endl;
	const string* sp = &s1;
	cout << debug_rep(s1) << endl;
	cout << debug_rep("dakflf;" ) << endl;
	cout << debug_rep(sp) << endl;
}
