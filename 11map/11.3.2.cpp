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

	map<string, int> word_counts;
	word_counts.insert({"joo", 1});
	string word;
	if(cin >> word)
	{
		++word_counts.insert({word, 0}).first->second;
	}
	for(auto c : word_counts)
		cout << c.second << endl;
	// pair(string, vector<int>)   pair

	multimap<string, vector<string> > mmm;
	vector<string> family{"son", "father"};

	mmm.insert({"jo", family});
	word_counts.erase(word_counts.begin(), word_counts.end());

	cout << word_counts.at("joo") << endl;

	

}
