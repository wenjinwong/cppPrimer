#include<iostream>

int main()
{
	char attention[100] = "please input two int number and we will output a sequence between lower and higher";

	std::cout << attention << std::endl;
	int start, end;
	std::cin >> start >> end;
	int tmp;
	while((start <= end ? end - start : start -end))
	{
		std::cout << (start <= end ? start++ : end++) << std::endl;
	}return 0;
}
