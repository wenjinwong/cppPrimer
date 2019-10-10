#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;


int main()
{
	srand(time(NULL));
	char noNull[] = {'h','i'};
	cout << noNull << endl;

	string s1(noNull);
	cout << s1 << endl;
	const char *cp = "hello world!";
	string s4(cp + 6, 5);
	// out of range 
	//string s5(s4, 15, 6);

	vector<char> vc;
	for(int i = 0; i < 10l; i++)
	{
		vc.push_back(rand() % 10 + 0x40);
	}
	string ss;
	for(auto c : vc)
	{
		ss.push_back(c);
	}
	cout << ss << endl;

	string sss (vc.data(), vc.size());
	cout << sss << endl;
}
