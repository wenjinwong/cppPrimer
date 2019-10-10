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

class Sales_data {
public:
	Sales_data() = default;
	Sales_data(const Sales_data&) = delete;
	Sales_data& operator=(const Sales_data &);
	~Sales_data() = delete;
};

Sales_data& Sales_data::operator=(const Sales_data&) = default;

class st{
public:
	st() = default;
};


class test{
public:
	//test(string ss) : s(ss) {}
	//test(test& t){}
	//const string s;
	const int val = 5;
	const string &s = "hello world";
	int aa;
	test(int a) {
		cout << "test(int a) " << endl;
		aa = a;
	}
	//test(test&) = default;
	/*
	test(test& t)
	{
		cout << "test(t)" << endl;
	}
	*/
	//~test() = delete;
	//test& operator=(const test&) = default;
};

int main(int argc, char* argv[])
{
    srand(time(NULL));
	//Sales_data ss;

	st *s = new st();
	delete s;
	string *p = new string("test");

	test te(5);
	test tee;
	tee = te;
	cout << tee.aa << endl;
}
