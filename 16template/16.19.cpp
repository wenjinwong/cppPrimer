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

template<typename T = vector<int>>
void print(T ivec)
{
	for(typename T::size_type i = 0; i != ivec.size(); i++)
		cout << ivec[i] << endl;
	for(typename T::iterator i = ivec.begin(); i != ivec.end(); ++i)
		cout << *i << endl;
}
		

int main()
{
	vector<int> ivec{1,23,4,5,6,7,6};
	print<>(ivec);
    return 0;
}
