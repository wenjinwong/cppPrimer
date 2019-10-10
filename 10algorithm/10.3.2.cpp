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
#include<sstream>

using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));
	vector<string> vec;
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	vec.push_back("aaa");
	char c = ' ';
	for_each(vec.begin(), vec.end(), [&cout, c](const string& s) { cout << s<<c;});
	auto g = [](const int a) { int sss = a;
		return sss; };
	auto jj = g(3);
	cout << jj;
}

