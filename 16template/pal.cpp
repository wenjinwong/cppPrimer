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


template<typename T> class Pal;
class C{
	friend class Pal<C>;
	template<typename T> friend class Pal;
};

template<typename T> class C2 {
	friend class Pal<T>;
	template<typename X> friend class Pal2;
	friend class Pal3;
};


int main()
{
    return 0;
}
