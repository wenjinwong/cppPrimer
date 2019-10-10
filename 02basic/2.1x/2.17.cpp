#include<iostream>

int main()
{
	int i, &ri = i;
	std::cout << i << "   " << ri << std::endl;
	i = 5;
	ri = 10;
	std::cout << i << "   " << ri << std::endl;
}
