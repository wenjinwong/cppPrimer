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

using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));

	set<int> ss;

	ss.insert(99);
	ss.insert(9);
	ss.insert(999);
	ss.insert(9);
	ss.insert(9);
	ss.insert(1);
	ss.insert(909);
	auto it1 = ss.upper_bound(90);
	pair<decltype(it1), decltype(it1)> p;
	p = ss.equal_range(99);
	cout<< *p.first << endl;
	cout << *it1 << endl;
	
	for(auto beg = ss.lower_bound(99), end = ss.upper_bound(99); beg != end;
			++beg )
	{
		cout << *beg << endl;
	}

	cout << "end " << endl;
	for(auto pos = ss.equal_range(88);
			pos.first == pos.second; ++pos.first)
	//	pos.first  = 8;



}
