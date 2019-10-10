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


template<typename T1, typename T2, typename T3>
T1 sum(T2 lhs, T3 rhs)
{
	return lhs + rhs;
}


int main()
{
	auto val = sum<long long>(6, 7);
	cout << val << endl;
    return 0;
}
