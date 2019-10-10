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


class base{
	public:
		virtual void f() { cout << "base" << endl;}
};

class derived : public base 
{
	public:
		void f() { cout << "derived" << endl; }
		void ff() { cout << "derived ff" << endl; }
};

void f(const base& b)
{
	try{
		const derived& d = dynamic_cast<const derived &>(b);
		cout << " success " << endl;
	}
	catch(bad_cast)
	{
		cout << " fail " << endl;
	}
}
int main()
{
	derived tt;
	base u;
	base &y = tt;
	f(y);
	base* db = new derived();
	base *b = new base();
	derived* d = new derived();
	if(derived *tmp = dynamic_cast<derived*>(b))
	{
		tmp->f();
		tmp->ff();
	}
	else
	{
		
		cout<<"not" <<endl;
	}
	d->f();
	
    return 0;
}
