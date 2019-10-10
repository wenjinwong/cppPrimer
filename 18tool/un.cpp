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

union Token{
	int ival;
	char cval;
	double dval;
};

int main()
{
	Token ss = {'a'};
	Token last_val;
	last_val.cval = 'z';
	Token *pt = new Token;
	pt->ival = 42;
	cout << pt->ival;
    return 0;
}
