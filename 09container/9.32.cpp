#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
using namespace std;

int main()
{

	vector<int> ii;
	vector<int>::iterator begin = ii.begin();
	ii.push_back(1);
	ii.push_back(1);
	ii.push_back(1);

	while(begin != ii.end())
	{
		begin++;
		ii.insert(begin, 42);
		begin++;
	}

	for(auto c : ii)
		cout << c << endl;
}
