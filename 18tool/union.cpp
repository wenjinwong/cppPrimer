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


union Token {
	Token(char c, int i, double d) : cval(c), ival(i), dval(d) {}
	char cval; int ival; double dval;
};


int main()
{
	Token tt('g', 4, 43);
	cout << tt.ival << endl;
    return 0;
}
