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

int main()
{
	string *s = new string("safjasfjsf");
	cout << *s << endl;
	
	cout << s << endl;

	string *ss = new(s) string("fasfsd");
	cout << *ss << endl;
	cout << ss << endl;

    return 0;
}
