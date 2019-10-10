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

using namespace std;


struct B;
struct A{
	A() = default;
	A(const B& rhs) 
	{
		cout << "a";
	}

};

struct B{
	operator A() const
	{
		cout << " B" << endl;
		return A(*this);
	}
	int val;
};		
A f(const A& rhs)
{
	cout << "f" << " A";
}


int main()
{
	B b;
	A a = f(b.operator A());
    return 0;
}
