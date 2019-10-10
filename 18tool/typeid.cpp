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

class base {
	public:
		virtual void show()  { cout << " base " << endl; }
};

class derived {
	public:
		void show() { cout << " derived " << endl; }
};

int main()
{
	derived *dp = new derived;

	base *bp = new base;
	if(typeid(*bp) == typeid(*dp))
	{
		cout << " bp = dp " << endl;
	}

	if(typeid(*dp) == typeid(derived))
	{
		cout << "*dp is derived" << endl;
	}

	cout << " over " << endl;
    return 0;
}
