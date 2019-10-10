#include<iostream>

int f()
{
	int i;
	std::cout << i << std::endl;
	i++;
	return 0;
}

int main()
{
	long double ld = 3.1415926536;
	int a{ld}, b{ld};
	std::cout << a << "  " << b << std::endl;
	int ii;
	f();
	std::cout <<"ii; " <<  ii;
	int dd(ld), dc = ld, mc(ld);
	return 0;
}
