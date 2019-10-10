#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string s;
	cin >> s;

	decltype( s.size()) index = 0;
	for(index; index < s.size(); index ++)
	{
		s[index] = 'X';
	}
	cout << s;
}
