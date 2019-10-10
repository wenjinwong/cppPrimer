#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

/*void reset(int &arg)
{
	arg = 0;
}
*/

void reset(int arg)
{
	cout << "arg : " << arg << endl;
}

int main()
{
	int a = 9;
	reset(a);
	cout << a << endl;

	const int& ii = 55;
    const string ss = "helloworld";
}
