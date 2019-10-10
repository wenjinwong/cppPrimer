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

template<typename T> 
T calc(const T&, const T&);
template<typename U> 
U calc(const U& bb)//const U&);
{
	return bb;
}
template<typename Type>
Type calc(const Type& a , const Type& b) 
{
	return b;
}

int main()
{
    return 0;
}
