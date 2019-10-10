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
using namespace std;




int main(int argc, char* argv[])
{
    srand(time(NULL));
	vector<int> ivec;
	for(int i = 0; i != 10; i++)
	{
		ivec.push_back(i);
		ivec.push_back(i);
	}

	set<int> si(ivec.cbegin(), ivec.cend());
	multiset<int> msi(ivec.cbegin(), ivec.cend());
	cout << ivec.size() << endl << si.size() << endl << msi.size() <<
		endl;

	map<string , vector<string> > home;
	vector<string> vv{"child", "old"};
	home["an"] = vv;
	for(auto c : home["an"])
		cout << c  <<endl;

	vector<string> words;
	string word;
	cin >> word;
	if(find(words.begin(), words.end(), word) == words.end())
	{
		words.push_back(word);
	}

	
	cin >> word;
	if(find(words.begin(), words.end(), word) == words.end())
	{
		words.push_back(word);
	}

	
	cin >> word;
	if(find(words.begin(), words.end(), word) == words.end())
	{
		words.push_back(word);
	}

	
	for(auto c : words)
		cout << c << endl;

}
