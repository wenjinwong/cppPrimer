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
#include<tuple>
using namespace std;

int main()
{
	tuple<int, int, int> t(1,2,3);
	//cout << t << endl;
	auto tt = make_tuple(1,2,3,4);
 //   t != tt;
	//t < tt;
	cout <<	get<3>(tt);
	//cout << endl << tuple_size<tt>::value << endl;
	//tuple_element<i,tt>::type ii;
	
	tuple<int, int, int> three{10, 20,30};
	tuple<string, vector<string>, pair<string, int> > test{"helll", {"aa", "bbb"}, {"af", 324}};

	return 0;
}
