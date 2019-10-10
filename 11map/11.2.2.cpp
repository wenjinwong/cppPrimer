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

class Book{
	public:
		string name;
		unsigned id;
};

bool comp(Book b1, Book b2)
{
	return b1.name > b2.name;
};

typedef bool (*pf)(Book, Book);

int main(int argc, char* argv[])
{
    srand(time(NULL));
	map<string, vector<int> > mm;

	vector<int>::iterator it;
	list<int>::iterator lit;
	map<string, list<int> > lmm;

	vector<int> vec;
	vec.push_back(1);
	vec.push_back(2);
	list<int> ls{1,3,4,5,5};
	ls.push_back(2);
	ls.push_back(2);
	mm["a"] = vec;
	it = mm["a"].begin();
	lmm["a"] = ls;
	lit = lmm["a"].begin();
	pf p = comp;
	set<Book, pf> bookStore(p);

	map<vector<int>::iterator, int> m1;
	map<list<int>::iterator, int> m2;
	

}
