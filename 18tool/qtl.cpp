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
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;

class out{
	public:
		class in{
			public:
				int val;
				in(int a) : val(a) { cout <<  "in" <<endl;}
		};
		string s = "asdfasd '";
		void f() { in(88);cout << in::val; };
		int val;
};

int main()
{
	out o;
	o.f();
    return 0;
}
