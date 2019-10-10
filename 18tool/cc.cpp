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

enum color{red, yellow, green};
enum class test{red, yellow, green};


class TT{
	public:
		static const color uu = red;
};
int main()
{
	constexpr test ii = test::green;
	test yy = test::red;
	color eye = red;
	cout << red << endl;
	switch(eye)
	{
		case red:
			cout << " red " << endl;
			break;
	}
    return 0;
}
