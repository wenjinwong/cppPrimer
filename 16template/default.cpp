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


template<typename T,typename F = less<T>>
int compare(const T &v1, const T& v2, F f = F())
{
	if(f(v1, v2)) return -1;
	if(f(v2, v1)) return  1;
	return 0;
}



int main()
{


	cout << compare<int>(1,2);
    return 0;
}
