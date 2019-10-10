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

struct Y {
	int val;
//	~Y() = delete;
};

struct hasY {
	hasY() = default;
	hasY(hasY&&) = default;
	Y mem;
};

int main()
{
	
	hasY hy, hy2 = std::move(hy);

    return 0;
}
