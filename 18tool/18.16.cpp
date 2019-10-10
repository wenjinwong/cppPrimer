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

namespace Exercise {
	int ival = 0;
	double dvar = 0;
	const int limit = 1000;
}


int ivar = 0;
//using namespace Exercise;

double dval = 3.333;
using Exercise::ival;

int main()
{
	using namespace Exercise;
	++ival;
	double dval = 3.15;

	const int limit = 89;
	cout << Exercise::limit << endl;
	cout << limit << endl;
	double dvar = 3.3;
	int iboj = limit + 1;
	++dvar;

	//++::ival;

    return 0;
}
