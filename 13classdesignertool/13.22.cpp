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
#include<initializer_list>

using namespace std;

class HasPtr{
public:
	HasPtr(int v, const string n) : val(v), name(new string(n)) {}
	HasPtr(const HasPtr& h)
	{
		val = h.val;
		name = new string(*(h.name));
	}
	HasPtr& operator=(const HasPtr& h)
	{
		//string* newp = new string(*h.name);
		delete name;
		//name = newp;
		auto nn = new string(*h.name);
		
		val = h.val;
		return *this;
	}

	~HasPtr()
	{
		delete name;
	}
	int val;
	string* name;
};

int main(int argc, char* argv[])
{
    srand(time(NULL));

	HasPtr h1(100,
			"hasgdcfgsdfjk;;;;;;;;gllkdsfjgklsdfgjlsdfglks");
	HasPtr h2(h1);
	HasPtr h3(88,"hdsfsdfdhkflhldskdsfkhkdfkfdsfkkhlsd3");
	h3 = h3;
	cout << *h3.name << endl;
}
