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

class book
{
	public:
	book(int a)
	{
		gg = a;
		cout << a << " book" << endl;
	}

	~book()
	{
		cout << gg << " ~book" << endl;
	}
	int gg;
};



int main(int argc, char* argv[])
{
    srand(time(NULL));
	shared_ptr<string> p1;
	shared_ptr<list<int> > p2;

	
	
	cout << p1.get() << endl;

	shared_ptr<string> pp = make_shared<string>("hello world");
	cout << *pp << endl;
	shared_ptr<string> ppp(pp);
	cout << *ppp << endl;

	auto p = make_shared<int>(55);
	auto m(p);
	cout << p.use_count() << endl;
	
	auto r = make_shared<book> (5);
	r = make_shared<book>(9);

	


}
