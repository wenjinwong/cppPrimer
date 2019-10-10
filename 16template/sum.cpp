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

template<class T1, class T2, class T3>
auto sum(T2 aa, T3 bb) -> decltype(aa + bb)
{
	return aa + bb;
}

int main()
{
	cout << sum<long double>(324234, 35329845);
    return 0;
}
