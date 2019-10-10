#include<iostream>
#include<string>
template<typename T> int compare(const T&, const T&)
{
	std::cout << "comp" << std::endl;
	return 1;
}
	
int (*pf1)(const int&, const int&) = compare;
void func(int(*) (const int&, const int&))
{
	std::cout << "func int" << std::endl;
}

int main() 
{
	func(pf1);
	func(compare<int>);
	return 0;
}


