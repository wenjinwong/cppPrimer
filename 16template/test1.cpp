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

template<typename T> class C {
	C(T tt) : t(tt) {}
	friend class bb;
	T t;
	int val = 9;
	template <typename X> friend class Pal;
};

template<typename X> class Pal {
	public :
		C c;
		Pal(T tt) : C(tt) {}
		void f() { cout << t << endl;}
}


class bb {
	public:
		C c;
		void f() { cout << c.val << endl; }
};

int main()
{
	Pal p;
	bb b;
	b.f();
    return 0;
}
