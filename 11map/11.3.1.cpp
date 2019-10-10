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

	map<int, int> m;
	m[1] = 1;
	m[2] = 1;
	m[12] = 1;
	m[13] = 1;
	m[10] = 1;
	map<int, int>::iterator it1 = m.begin();
	while(it1 != m.end() )
	{
		cout << it1->first << endl << it1->second << endl;
		it1->second = 9;
		it1++;
	}

	set<int> s{1,2,3,4,5};
	auto it2 = s.begin();
	if(it2 != s.end() )
	{
		// *it2 = 55;
	}

	cout << *it2 << endl;
	map<string, size_t> ss;
	ss.insert(map<string, size_t>::value_type("SSS",1));


	map<string, size_t> word_count;
	string word;
	while(cin >> word && word != "end")
	{
		auto ret = word_count.insert({word, 1});
		if(!ret.second)
			++ ret.first->second;
	}


	multimap<string, string> authors;

	authors.insert({"Barth, john", "sot-weed factor"});
	authors.insert({"Barth, john", "sot-weed factor"});

	authors.insert({"Barth, john", "sot-weed factor"});
}
