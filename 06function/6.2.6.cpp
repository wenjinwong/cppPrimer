#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int sum(initializer_list<int> il)
{
	int s = 0;
	for(auto i : il )
		s += i;
	return s;
}

int m()
{
	int u = 1;
	return 0;
//return with no value
}

string &s()
{
	return "hello";
}

int main()
{
	initializer_list<int> il {1, 2, 3, 4, 5, 6};
	cout << sum(il);
	// 6.27
	int u = m();
	cout << u << endl;
	
	const string ss = s();
}
