#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	vector<int> vint(10, 0);
	int tmp;
	for(auto i = 10u; i > 0; i--)
	{
		cin >> tmp;
		vint.push_back(tmp);
	}
	for(vector<int>::iterator it = vint.begin(); it != vint.end(); it++) *it *=
		*it;
	for(auto c : vint) cout << c << endl;
}
