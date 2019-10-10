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


int main()
{
	default_random_engine e;
	normal_distribution<> n(4, 1.5);
	vector<unsigned> vals(9);
	for(size_t i = 0; i != 200; ++i)
	{
		unsigned v = lround(n(e));
		if( v < vals.size())
			++vals[v];
	}
	for(size_t j = 0; j != vals.size() ; ++j)
		cout << j << " : " << string(vals[j], '*') << endl;
}
