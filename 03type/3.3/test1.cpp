#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<string.h>

using namespace std;

int main()
{
	char ca[] = {'a', 'b', '+'};
	cout << strlen(ca) << endl;
	const char *cp = ca;
	while(*cp)
	{
		cout << *cp << endl;
		++cp;
	}
	char aw[] = {'a', 'a'};
	char *p1 = ca;
	char *p2 = aw;
	cout << p1 + (long long)p2;
}
