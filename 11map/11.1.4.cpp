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
	
	set<string> same = { ".", ","};
	string word;
	map<string, unsigned> mm;
	while(cin >> word && word != "quit")
	{
		if(same.find(word) != same.end())
		{
			word.erase(remove(word.begin(), word.end(), "."), word.end());
			mm[word] ++;
		}
		else
		{
			mm[word]++;
		}
	}

	for(auto c : mm)
		cout << c.first << "  " << c.second << endl;

}
