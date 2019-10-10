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
using namespace std;
#include<random>

int main() 
{
	default_random_engine e;
	for(size_t i = 0; i < 10; ++i)
		cout << e() << " ";
	cout << endl;
	default_random_engine ee;
for(size_t i = 0; i < 10; ++i)
		cout << ee() << " ";
	e.seed(time(NULL));
	cout << e.max() << "   " << e.min() << endl;
	uniform_int_distribution<unsigned> u(0, 9);
	default_random_engine et;
	for(size_t i = 0; i < 10; ++i)
		cout << u(et) << " ";
	default_random_engine e1;
	default_random_engine e2(3242342424);
	default_random_engine e3;
	e3.seed(34);


}
