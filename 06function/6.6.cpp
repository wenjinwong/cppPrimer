#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

void f()
{
	cout << "f() " << endl;
}

void f(int )
{
	cout << "f(int) " << endl;
}

void f(int, int)
{
	cout << "f(int , int) " << endl;
}

void f(double, double = 3.14)
{
	cout << " f(double, double) " << endl;
}

int main()
{
	//f(2.56, 42);
	f(42);
	f(42, 0);
	f(2.5, 3.1);
}
