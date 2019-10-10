#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using namespace std;

namespace now{
	int val = 9;
	void f() { std::cout << "f  " ; }
}

namespace now
{
	void ff() { std::cout << "ff ";}
}
int main()
{
	now::ff();
	now::f();
	now::val = 99;
    return 0;
}

