#include<iostream>

int main()
{
/*	double d = 9.9, &dr = d;
	double *p = &dr;
	std::cout << &dr << "== " << &d << std::endl;
	std::cout << *p << std::endl;

	int i = 0;
	int *ip;
	*ip = 1000;
	std::cout << *ip << std::endl;
*/
	int ival = 1024;
	int *pi = &ival;
	int **ppi = &pi;
	const int &mm = 40;
	std::cout << mm << std::endl;
	const int i = 100;
	bool b = i;
	std::cout << static_cast<bool>(i) << std::endl;
	std::cout << ival << "  " << *pi << "  " << **ppi ;
    return 0;
}
