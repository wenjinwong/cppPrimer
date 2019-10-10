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
#include<unordered_map>
#include<unordered_set>
#include<utility>
using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));
	pair<string, string> aa;
	aa = {"aa", "val"};


	vector<pair<string, int> > vp;
	
	string word;
	int val;
	cin >> word;
	cin >> val;

	vp.push_back(make_pair(word, val));

	cin >> word;
	cin >> val;
	vp.push_back(make_pair(word, val));


	for(auto c : vp)
		cout << c.first << "     "  << c.second << endl;

	vp.push_back({"c", 3});
	vp.push_back(pair<string, int>{"d", 4});
	for(auto c : vp)
		cout << c.first << "     "  << c.second << endl;

	map<string, pair<string, string> > mmm;
	mmm["nn"] = make_pair("name", "19900101");

	cout << mmm["nn"].first << endl;

	map<string, int> test;
	auto map_it = test.begin();
	
	

	
}
