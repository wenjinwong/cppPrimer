#include<iostream>

int main()
{
	int sum = 0;
	for(int i = 50; i <= 100; i++)
	{
		sum += i;
	}

	for(int i = 10; i >= 0; --i)
	{
		std::cout << i << "   ";
	}

	int start, end;
	std::cin >> start >> end;
	for(start; start <= end; start++)
	{
		std::cout << start << "    ";
	}
	return 0;
}
