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


count_empty_string(vector<string> &vs)
{
	auto f = mem_fn(&string::empty);
	return count_if(vs.begin(), vs.end(), f);
}

bool check_value(sales_data& sd, double t)
{
	return sd.avg_price() > t;
}

vector<sales_data>::iterator find_first_high(vector<sales_data> &vsd, double t)
{
	auto f = bind(check, _1, t);
	return find_if(vsd.begin(), vsd.end(), f);
}



int main()
{
    return 0;
}
