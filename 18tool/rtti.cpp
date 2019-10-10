include<iostream>
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
		virtual void uu(){ cout << " uu " <<endl;}
};

class de  : public base
{
	public:
		void uu() { cout << "deuu" << endl;
		}
};

int main()
{
	de *pp = new de();
	base *p = new base();
	if(de* dp = dynamic_cast<de*>(pp))
	{
		dp->uu();
		cout << " converted " <<endl;
	}
    return 0;
}
