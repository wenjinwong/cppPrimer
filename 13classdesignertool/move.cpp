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

using namespace std;

struct X {
	int i;
	string s;
};

struct hasX{
	X mem;
};


int main()
{
	X x, x2 = std::move(x);
	hasX hx, hx2 = std::move(hx);

    return 0;
}
