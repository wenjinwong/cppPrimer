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


class base{
	public:
		base(int a = 1, int b = 2) : aa(a), bb(b) {}
		int aa, bb;
};

class derived : public base {
	public:
		using base::base;
		int val = 9;
};

int main()
{
	derived d(3);
	cout << d.bb;
    return 0;
}
