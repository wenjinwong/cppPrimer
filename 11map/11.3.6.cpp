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

	map<string, string> mm{ {"brb", "be right back"} 
		,{"k", "okay"}, {"y", "why"}, {"r", "are"}, 
		{"u", "you"}, {"u", "you"}, {"pic", "picture"},
		{"thk", "thanks"}, {"18r", "later"} };

		vector<string> vv {"where", "r", "u", "y", "dont", "u", "send",
			"me", "a", "pic", "k", "thk", "18r"};

		for(auto c : vv)
		{
			auto iter = mm.find(c);
			if(iter!=mm.end())
			{
				cout << iter->second << endl;
			}
			else
			{
				cout << c << endl;
			}
		};

	

}
