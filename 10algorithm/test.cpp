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



int f(int a){
	return a;
}

int main(int argc, char *argv[])
{
    srand(time(NULL));
	deque<int> dddd;
	ofstream out(argv[1]);
	for(int i =0; i< 20; i++)
	{
		out << rand() % 10 << endl;
		dddd.push_back(rand() );
	}
	out.close();
	cout << f(8);
	auto dd = [] { return 88; };
	cout << dd() << endl;
	
	stable_sort(dddd.begin(), dddd.end(), [](int a, int b) { return a < b;
			});
	for(auto c : dddd)
		cout << c << endl;

	int sz = 5;
	list<string> ll;
	ll.push_back("aaaaa");
	ll.push_back("aaa");
	ll.push_back("aa");
	ll.push_back("aaa");
	ll.push_back("aaaa");
	ll.push_back("aaaaaaaa");

	auto iter = ll.begin();
	iter = find_if(ll.begin(), ll.end(), [sz](const string &a) { return a.size() >=
			sz; });
	cout << *iter << endl;

}
