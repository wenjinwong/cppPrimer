#include<iostream>

int f()
{
	return 0;
}
int main()
{
	decltype(f()) i;
	i = 1;
	decltype((i)) u = i;
	auto t = i;
	
	return 0;
}
