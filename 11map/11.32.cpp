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
    multimap<string, vector<string> >  info;
	vector<string> vec {"aa", "bb", "ccc"};
	info.insert({"andy", vec});

	for(auto c : info)
	{
		cout << c.first << endl;
		for(auto m : c.second)
		{
			cout << m << "  ";
		}
	}

	info.erase(info.find("andy"));



}
