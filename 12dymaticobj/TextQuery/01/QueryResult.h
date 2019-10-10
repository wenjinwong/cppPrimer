#ifndef QR_H
#define QR_H
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
#include"TextQuery.h"

using namespace std;

class QueryResult
{
public:
	QueryResult(TextQuery& tq) : lines(tq.getLines()), wordLines(tq.getWordLines()) {}

	void query(string word)
	{
		if(wordLines->find(word) != wordLines->end())
		{
			cout << word << "  occures " << ((*wordLines)[word]).size() << "times" << endl;
			for(auto c : (*wordLines)[word])
			{
				cout << c << "   " << (*lines)[c] << endl;
			}
		}
	}



private:
	shared_ptr<vector<string>> lines;
	shared_ptr<map<string, set<int>> > wordLines;
};

#endif
