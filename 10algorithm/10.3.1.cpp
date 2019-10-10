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
#include<sstream>

using namespace std;

bool ffff(string lhs, string rhs)
{
	return lhs.size() < rhs.size();
}


bool fff(string lhs)
{
	return lhs.size() > 2;
}




int main(int argc, char* argv[])
{
    srand(time(NULL));
		
	vector<string> vec;

	vec.push_back("aaa");
	vec.push_back("aa");
	vec.push_back("a");
	vec.push_back("aaa");
	vec.push_back("aa");
	vec.push_back("aaa");
	vec.push_back("aa");
	vec.push_back("a");
	vec.push_back("aaa");

	stable_sort(vec.begin(), vec.end(), ffff);

	for(auto c : vec)
	{
		cout << c << endl;
	}

	auto itt = partition(vec.begin(), vec.end(), fff);
	for(auto it = vec.begin(); it != itt; ++it)
	{
		cout << *it << endl;
	}
	
}
