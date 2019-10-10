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

using namespace std;

class cc{
	public:
		int operator()(int a, int b, int c) {
			if(a) return b;
			else return c;
		}
};
int main()
{
	cc c;
	cout << c(0,1,3);
    return 0;
}
