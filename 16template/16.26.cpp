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


class NoDefault{
	public:
	NoDefault() = delete;
	NoDefault(int a) : val(a) {}
	int val;
};

int main()
{
	vector<NoDefault> vn{1,2};
	//NoDefault nn;
	

    return 0;
}
