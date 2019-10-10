#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
using namespace std;



int main()
{
	vector<int>::value_type val;
	vector<int>::iterator it;
	vector<int> vec;

	vec.push_back(10);
	vec.push_back(10);
	vec.push_back(10);
	val = vec[2];
	cout << val << endl;
	list<string> sss;
	list<string>::const_iterator is;
	sss.push_back("aaa");
	sss.push_back("bbb");
	is = sss.begin();
	cout << *is << endl;
}
