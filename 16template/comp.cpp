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

template<class T>
int compare(const T &lhs, const T &rhs)
{
	cout << lhs + rhs;
}
int main()
{
	string s("aaff");
	string ss("gg");
	cout<< compare<string>("fasd", "a");
	cout << compare(s, ss);
    return 0;
}
