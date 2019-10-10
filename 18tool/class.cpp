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


class ss{
	public:
		int val = 9;
		string contents = "hhhh";
};

int main()
{
	/*
	ss myss, *pss = &myss;
	auto s = myss.*pdata;
	const string ss::*pdata;
	pdata = &ss::contents;
*/
	const string ss::*pdata;
	pdata = &ss::contents;
//	auto i = ss::val;
	cout<< *pdata << endl;
    return 0;
}
