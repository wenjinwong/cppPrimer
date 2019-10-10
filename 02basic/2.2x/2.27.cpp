#include<iostream>

typedef char* pstring;
int main()
{
	const int i = 0, &r = 0;
	std::cout << r <<std::endl;
	int c = 10;
	const int &rc = c;
	const int *pp = &c;
	const int gg = 9;
	const int *const p3 = &gg;
	const int *p2;
	
	pstring cstr = 0;
	pstring s = "sdalfjdas";
	cstr = s;
	std::cout << cstr;
	return 0;
}
