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

template<typename It>
auto fcn(It beg, It end) -> decltype(*beg)
{
	return *beg;
}


template<typename It>
auto fcn2(It beg, It end) -> typename remove_reference<decltype(*beg)>::type
{
	return *beg;
}


template<typename It>
auto fcn3(It beg, It end) -> decltype(*beg + 0)
{
	return *beg;
}

int main()
{
	vector<string> vec;
	vec.push_back("test");
	cout << fcn(vec.begin(), vec.end());
	cout << fcn2(vec.begin(), vec.end());
	vector<int> iv;iv.push_back(9);
	cout << fcn3(vec.begin(), vec.end()) << endl;
	return 0;
}
