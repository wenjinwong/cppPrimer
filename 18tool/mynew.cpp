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
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;


void* operator new(size_t size)
{
	if(void *mem = malloc(size))
		return mem;
	else
		throw bad_alloc();
}

void operator delete(void *mem) noexcept
{
	free(mem);
}

template<class T>
class strvec {
public:
	T* new(T) 
	{
		return static_cast<T*>operator new(sizeof(T));
	}
	T *newelements = static_cast<T *>(operator new[](newcapacity * sizeof(T)));

		


int main()
{
    return 0;
}
