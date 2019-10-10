#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string s;
	getline(cin, s);
	string::iterator it = s.begin();
	while(it != s.end() && *it != ' ')
	{
		*it = toupper(*it);
		it++;
	}
	for(auto c : s) cout << c;

}
