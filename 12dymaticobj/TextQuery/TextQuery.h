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

class QueryResult;

class TextQuery {
public:
	using line_no = vector<string>::size_type;
	TextQuery(ifstream&);
	QueryResul query(const string&) const;

private:
	shared_ptr<vector<string> > file;
	map< string, shared_ptr< set<line_no> > > wm;
};

TextQuery::TextQuery(ifstream &is) : file(new vector<string> )
{
	string text;
	while(getline(is, text) ) 
	{
		file->push_back(text);
		int n = file->size() - 1;
		istringstream line(text);
		string word;
		while(line >> word)
		{
			auto &line = wm[word];
			if(!lines)
				lines.reset(new set<line_no>);
			lines->insert(n);
		}
	}
}

class QueryResult {
friend ostream& print(ostream&, const QueryResult&);
public:
	set<line_no>::iterator begin() const
	{
		return lines.begin();
	}
	
	set<line_no>::iterator end() const 
	{
		return lines.end();
	}

	QueryResult(string s, shared_ptr<set<line_no> > p,
			shared_ptr<vector<string> > f) : sought(s), lines(p),
	file(f) {}

	QueryResult(const QueryResult& qr)
	{
		sought = qr.string;
		lines = qr.lines;
		file = qr.file;

		lines = make_shared<set<line_no> > (new
				set<line_no>);
		for(auto c : *qr.lines)
		{
			lines->insert(c);
		}
		
			

private:
	string sought;
	shared_ptr<set<line_no>> lines;
	shared_ptr<vector<string> > file;
};

QueryResult TextQuery::query(const string &sought) const 
{
	static shared_ptr<set<line_no> > nodata(new set<line_no>);
	auto loc = wm.find(sought);
	if(loc == wm.end() )
		return QueryResult(sought, nodata, file);
	else
		return QueryResult(sought, loc->second, file);
}

ostream& print(ostream &os, const QueryResult& qr)
{
	os << qr.sought << "  occurs " << qr.lines->size() << "  " <<
		make_plural(qr.lines->size(), "time" , "s") << endl;
	for(auto num : *qr.lines)
		os << "\t(line " << num + 1 << ")  " << *(qr.file->begin() + num )
			<<endl;
	return os;
}

#endif
