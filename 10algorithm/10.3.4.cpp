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

using namespace std;

using std::placeholders::_1;
using std::placeholders::_2;
bool f(string s, int b)
{
	return s.size() > b;
}

bool dd(ostream &os, string ss)
{
	os << ss << endl;
	return 0;
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
	auto ff = bind(f, _1, 6);	
	vector<string> ll = {"afdklafa", " elsfjdalfjasld", "ds", "dasf",
		"sadfkdfklf"};

	auto ddd = bind(dd, ref(cout), _1);
	ddd("cout ");
	cout << count_if(ll.begin(), ll.end(), ff);
	
}
