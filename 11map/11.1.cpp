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
	
	map<string, size_t> word_count;
	string word;
	while(cin >> word && word != "quit")
		 ++ word_count[word];
	for(const auto & w : word_count)
		cout << w.first << "occurs" << w.second <<
			((w.second > 1) ? "times": "time" ) << endl;

	map<string, int> word_cc;
	set<string> exclude = {"a", "the", "and", "asd", "ads"};
	while(cin >> word && word != "quit")
	{
		if(exclude.find(word) == exclude.end())
			++word_cc[word];
	}

	for(auto c : word_cc)
		cout << c.first <<  "    < " << c.second << endl;

}
