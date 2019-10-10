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


class base1{
public:
	base1(const string& s) : ss(s) {}
	string ss;
};

class base2{
public:
	base2(const string& s) : sss(s) {}
	string sss;
};

class dd : public base1, public base2
{
	public:
	using base1::base1;
	using base2::base2;
	dd(const string& ssss):base1(ssss), base2(ssss) {}
	dd() = default;
};







int main()
{
	dd ddd(string("sfas"));
    return 0;
}
