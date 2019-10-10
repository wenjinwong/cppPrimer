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
//using namespace std;


template<class T, unsigned M>
T* begin(T (&p)[M])
{
	return &p[0];
}

int main()
{
	int a[] = {1,2,3,4,5,6,7,8,9,10};
	int *pp = begin(a);
	std::cout << *pp <<std::endl;
    return 0;
}
