#include<iostream>
#include<string>
using std::cin;using std::cout;using std::endl;
using std::string;

int main()
{
	string s1, s2;
	cin >> s1 >> s2;
	if(s1 == s2)
	{
		cout << "s1 == s2" << endl;
	}
	else
	{
		if(s1 > s2)
			cout << s1;
		else
			cout << s2;
	}

	return 0;
}
