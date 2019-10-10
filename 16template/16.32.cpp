#include<string>
#include<iostream>

/*
template<class T> int compare(const T& lhs, const T& rhs)
{
	return lhs < rhs;
}*/
template<class T> int compare(const T lhs, const T rhs)
{
	return lhs < rhs;
}


int main()
{
	int a = 1, b = 2;
	compare(a, b);
//	std::cout<< compare("hi", "word");
//	std::cout <<compare("bye", "daa");
}
