#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<time.h>
#include<stdlib.h>
using namespace std;

int main()
{
	unsigned grade = 59;
	cout << ((grade <60) ? "fail" : "pass") << endl;
	//cout << (grade < 60) ? "fail" : "pass";
//	cout << grade < 60 ? "fail" : "pass" << endl;
	vector<int> vec;
	srand((unsigned int)time(NULL));
	for(int i = 0; i < 10; i++)
		vec.push_back((int)(rand() % 10));
	for(auto& c : vec)
		c = (c%2 == 0) ? c : c * c;

	for(int i = 0; i < 10; i++)
		cout << vec[i] << endl;
}
