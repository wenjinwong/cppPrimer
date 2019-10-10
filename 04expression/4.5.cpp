#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int *ptr, ival;
	vector<int> vec;
	ptr = &ival;
	*ptr = 100;
	cout << ival << endl;
	ival = 0;
	vec.push_back(1000);
	vec.push_back(100);
	vec.push_back(10);
	cout << (vec[ival++] <= vec[ival]);
	vector<string> svec = {"hello", "but", "of"};
	vector<string>::iterator it = svec.begin();

	it++->empty();
	cout << it->size();
}
