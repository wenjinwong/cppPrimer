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


template<class t>
t find(t a, t b,int val)
{
	while( a != b)
	{
		if (*a == val)
		{
			cout << val << endl;
			return a;
		}
		++a;
	}
}

template<class T, unsigned M>
void print(T (&ref)[M])
{
	for(auto c : ref)
		cout << c << endl;
}
int main()
{
	int a[]={1,2,3,4,5};
	print(a);
	vector<int> vec{1,2,3,4,56,7,8};
	find(vec.begin(), vec.end(), 7);
    return 0;
}
