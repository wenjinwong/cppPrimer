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

class test{
public:
	test(const test&) = delete;
	test() {};
};

class HasPtr {
public:
	HasPtr(const string& s = string()) : ps(new string(s)), i(0) {}

	~HasPtr() {
		delete ps;
		cout << "deconstructed" << endl;
	}

	string& getString() const{
		return *ps;
	}
	int getI() const {
		return i;
	}

	HasPtr(HasPtr& SS) : ps(new string(SS.getString())),
	i(SS.getI()) {}
	/* 
	HasPtr(HasPtr& hp)
	{
		ps = new string(*hp.ps);
		i = hp.i;
	}
	*/
	HasPtr& operator=(const HasPtr& rhs)
	{
		ps = new string(rhs.getString() );
		i = rhs.getI();
		return *this;
	}

private:
	string *ps;
	int i;
};


int main(int argc, char* argv[])
{
    srand(time(NULL));

	HasPtr h("hash");
	HasPtr m = h;
	cout << m.getString() << endl;
}
