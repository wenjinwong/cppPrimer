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
unsigned f(vector<T> vec, T val)
{
	unsigned ret = 0;
	for(auto c : vec)
		if(c == val) ret++;
	return ret;
}

template<>unsigned f(vector<char*> vec, char* c)
{
	unsigned ret = 0;
	for(auto v : vec)
		if( c == v) ret++;
	return ret;
}

int main()
{
	vector<int> iv {1,32,234,32,432,42,1,34,1,31,314,1,34312,43212,2,223,434,14,1234,3,24,1,23,4,4};
	cout <<	f(iv, 4);
	vector<char*> cv{"af","b","bb","b","a"};
	cout << f<char*>(cv, "b");
    return 0;
}
