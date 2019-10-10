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
class b{
	public:
		int val = 99;
};
class b1 : public b{
	public:
		int mm = 88;
	private:
		int val = 53;
};

class b2{
	public:
		int val = 8;
};
class dd : public b1, public b2 {
	public:
		void f() { val = 9 ;}
};
int main()
{
    return 0;
}
