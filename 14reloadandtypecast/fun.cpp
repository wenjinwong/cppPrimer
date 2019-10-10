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
struct absInt {
	int operator() (int val ) const 
	{
		return val < 0 ? -val : val;
	}
};

int main()
{
	int i = -43;
	absInt aa;
	int ui = aa(i);
	cout << ui << endl;
    return 0;
}
