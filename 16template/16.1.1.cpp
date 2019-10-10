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
using namespace std;

class tt {
	public:
		string name= "00";
};

template<class t>
int f(t a, t b)
{
	if(a < b) return 1;
	return 0;
}
int main()
{
	tt a, bb;
	f(a, bb);
    return 0;
}
