#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<numeric>
#include<functional>
#include<sstream>                                                      
#include<set>
#include<map>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>
#include<initializer_list>

struct A{
	A(int a) : val(a ) {}
	A(double a) : val (a) {}
	operator int() const { return val;}
	operator double() const{ return val;}
	double val;
};

void f2(long double aa)
{
	std::cout << "f2" << std::endl;
}

class SmallInt {
	public:
		int val;
		SmallInt(int a) : val(a) {}
		operator int() const { std::cout << "int" << std::endl; return val;}
		friend SmallInt& operator+(SmallInt &lhs, SmallInt& rhs)
		{
			lhs.val += rhs.val;
			return lhs;
		}
};

int main()
{
	SmallInt s1(5), s2(5);
	s1 + s2;
	int i = s1 + 0;
	A a1(33.14);
	f2(a1.operator int());
	//long lg = 342.43;
	//A a2(lg);
}
