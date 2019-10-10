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
#include<functional>
using namespace std;


class Base{
	friend class Pa;
	private:
	string name = "Base";
};

class Derived : private Base {
	public:
		int val = 2;
		using Base::name;
		void gg() { cout << name << endl;}
};
/*
class Pa{
public:
	int f(Base b) {cout << b.name;}
//	int f2(Derived d) { cout << d.val << " " << d.name << endl;}
};
*/
int main()
{
	Derived dd;
	dd.gg();

    return 0;
}
