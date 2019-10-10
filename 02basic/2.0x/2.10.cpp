#include<iostream>

int global_int;
std::string global_str;
int main()
{
	int local_int;
	std::string local_str;
	std::cout << global_int << "  " << global_str << std::endl;
	std::cout << local_int << "   " << local_str;
}
