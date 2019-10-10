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



int main(int argc, char* argv[])
{
    srand(time(NULL));
	size_t v1 = 42;
	auto f1 = [&, v1]{cout << v1 << endl;};
	f1();
	wint_t v2 = 100;
	auto f2 = [=, &v2] { v2++; cout << v2;};

	f2();
	cout << v2 << endl;
	
	auto f3 = [v1]()mutable {return ++v1;};
	v1 = 0;
	auto j = f3();
	cout << j << endl;

	vector<int> vv;

	vv.push_back(10);
	vv.push_back(10);
	vv.push_back(10);
	vv.push_back(-10);
	vv.push_back(-10);
	vv.push_back(-10);
	transform(vv.begin(), vv.end(), vv.begin(), [](int i)->int { if(i > 0)
			return i;
			else
			return -i;
			});

	for_each(vv.begin(), vv.end(), [](int i) {cout << i << endl;});

	list<string> slist = {"alksfjlds", "saldf", "fsald", "df" ,"fds",
		"asdjofidf", "oiweroieworj", "f", "ad", "dsjfldsjflasdf"};

	int si = 6;
	int cc = count_if(slist.begin(), slist.end(), [=](string s) ->int { 
			return s.size() > 6;});
	cout << cc << endl;

	int val = 10;
	auto f5 = [&val]() ->bool{ if(val != 0) {
		--val; 
		return 0;
	}
	else if(val == 0)
		return 1;
	};

	f5();
	cout << f5();
}
