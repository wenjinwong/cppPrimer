#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

bool strcmp_(char *lhs, char *rhs)
{
	bool ret = 0;
	while( !(ret = (*(unsigned char*)lhs - *(unsigned char*)rhs)) && *rhs)
	{
		rhs++;
		lhs++;
	}
	return !ret;
}
int main()
{
	char a[] = "hello1";
	char b[] = "hello2";
	cout << strcmp_(a, b);
	
}
