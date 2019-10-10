#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int sum = 0;
	int val = 8;
	while( val <= 10)
	{
		sum += val;
		++val;
	}
	val = 8;
	sum = 0;
	while( val <= 10)
		sum += val, ++val;
	cout << sum << endl; //5.1
}
