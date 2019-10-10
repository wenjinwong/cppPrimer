#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int n = 5;

int fact(int n)
{
	//cout << global << endl;
	if(n == 1)
		return 1;
	else 
		return n * fact(n-1);
}

int staticfun()
{
	static unsigned cnt;
	return ++cnt;
}

int main()
{
	cout << fact(5) << endl;
	cout << staticfun() << endl << staticfun() << endl;
	{
		unsigned s = 0;
		cout << s << endl;
	}
	
}
