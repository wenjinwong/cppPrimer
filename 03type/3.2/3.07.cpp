#include<iostream>
#include<string>
#include<cctype>
using namespace std;
int main()
{
	string s;
	cin >> s;
	for(char &c : s)
		c = 'X';
	cout << s;
}
