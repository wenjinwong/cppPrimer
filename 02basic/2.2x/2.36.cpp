#include<iostream>

int main()
{
	int a = 3, b = 4;
	decltype(a) c = a; //type of c is int
	decltype( (b)) d = a; //type of d is int&
	++c; ++ d;
	return 0;
}
