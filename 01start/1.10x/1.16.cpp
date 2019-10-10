#include<iostream>

int main()
{
	int val, sum;
	sum++;
	std::cout << sum << std::endl;
	while(std::cin >> val)
		sum += val;
	std::cout << sum;
	return 0;
}
