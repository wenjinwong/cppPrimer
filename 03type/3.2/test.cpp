#include<iostream>
#include<string>
#include<cctype>

using std::cin;using std::cout;using std::endl;
using std::string;

int main()
{
	unsigned ttt = -10;
	cout << ttt << endl;
	string s("hello, world!!!");
	decltype(s.size()) cnt = 0;
	for(auto c:s)
	{
		if(std::ispunct(c))
		{
			++cnt;
		}
	}
	cout << cnt;

	for(auto &c : s)
		c = toupper(c);
	cout << s << endl;
	return 0;
}
