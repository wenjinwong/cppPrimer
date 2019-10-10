#ifndef TQ_H
#define TQ_H

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
#include<memory>
using namespace std;

class TextQuery
{
public:
	TextQuery(ifstream& infile)
	{
		lines = make_shared<vector<string> >();
		wordLines = make_shared<map<string, set<int>> >();
		string line;
		unsigned cnt = 0;
		while(getline(infile, line))
		{
			lines->push_back(line);

			istringstream is(line);
			string word;
			while(is >> word)
			{
				cout <<"line:  " << cnt << " word:  " << word<< endl;
				(*wordLines)[word].insert(cnt);
			}
			cnt++;
		}
	}

	void show()
	{
		for(auto c : *lines)
			cout << c << endl;
	}

	shared_ptr<vector<string> > getLines()
	{
		return lines;
	}

	shared_ptr< map<string, set<int> > > getWordLines()
	{
		return wordLines;
	}

private:
	shared_ptr<vector<string> > lines;
	shared_ptr< map<string, set<int> > > wordLines;

	//vector<string> lines;
	//map<string, set<int> > wordLines;
};

#endif
