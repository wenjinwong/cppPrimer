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

class HasPtr {
friend void swap(HasPtr&, HasPtr&);
	
public:
	HasPtr& swap(HasPtr rhs);
	HasPtr(const string& s = string()) :
		ps(new string(s)), i(0), use(new size_t(1)) {}

	HasPtr(HasPtr &&rhs);
	HasPtr(const HasPtr &p) : ps(p.ps), i(p.i), use(p.use)
	{ ++*use;}
	~HasPtr();
	void count_use() { cout << *use << endl; }
	HasPtr& operator=(const HasPtr& rhs);
	HasPtr& operator=( HasPtr&& rhs);
	bool operator<(const HasPtr& rhs) const;
	const string& get() { return *ps;}
private:
	string *ps;
	int i;
	size_t *use;
};

inline void swap(HasPtr& lhs, HasPtr& rhs)
{
	cout << "swap:  " << endl;
	swap(lhs.ps, rhs.ps);
	swap(lhs.i, rhs.i);
}

HasPtr::HasPtr(HasPtr&& rhs)
{
	/*
	if(--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	rhs.ps = nullptr;
	rhs.use = nullptr;
	*/
	cout << "Move Assignment" << endl;
	if(this != & rhs) {
		delete ps;
		ps = rhs.ps;
		rhs.ps = nullptr;
		rhs.i = 0;
	}
	return *this;
}

HasPtr& HasPtr::operator=(HasPtr&& rhs)
{	
	if(--*use == 0)
	{
		delete ps;
		delete use;
	}
	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	rhs.ps = nullptr;
	rhs.use = nullptr;

}
bool HasPtr::operator<(const HasPtr& rhs) const
{
	cout << " lhs < rhs " << endl;
	return *ps < *rhs.ps;
}

HasPtr& HasPtr::swap(HasPtr rhs)
{
	cout << "swap:   " << endl;
	string* tmp = rhs.ps;
	rhs.ps = this->ps;
	ps = tmp;
	return *this;
}

HasPtr::~HasPtr()
{
	if(--*use == 0)
	{
		delete ps;
		delete use;
	}
}

HasPtr& HasPtr::operator=(const HasPtr &rhs)
{
	++*rhs.use;
	if(--*use == 0)
	{
		cout << "delete use" << endl;
		delete ps;
		delete use;
	}

	ps = rhs.ps;
	i = rhs.i;
	use = rhs.use;
	return *this;
}


int main(int argc, char* argv[])
{
    srand(time(NULL));
	HasPtr h1("hello");
	cout << "h2" << endl;
	HasPtr h2("tt:");
	h2.count_use();
	h1.count_use();

	{
		HasPtr h3(h1);
		h3.count_use();
	}

	HasPtr h4(h2);
	h2.count_use();
	swap(h1, h2);
	cout << "h2:  ";
	h2.count_use();
	cout << "h1:  ";
	h1.count_use();
	swap(h1, h2);
	//h1.swap(h2);
	//cout << "h1:  " << h1.get() << endl;
	//cout << "h2:  " << h2.get() << endl;
	HasPtr h3("test");
	HasPtr h6("gg");
	HasPtr h5("hhhhhdjfkl");
	vector<HasPtr> vec;
	vec.push_back(h1);
	vec.push_back(h2);
	vec.push_back(h3);
	vec.push_back(h6);
	vec.push_back(h5);
	HasPtr h7("h7");
	HasPtr h8("hdsf7");
	HasPtr h9("asdfh7");
	HasPtr h10("ffh7");
	HasPtr h11("vfcch7");
	HasPtr h12("dsah7");
	HasPtr h13("asfh7");
	HasPtr h14("fah7");
	HasPtr h15("bvh7");
	HasPtr h16("dsah7");
	HasPtr h17("ah7");
	HasPtr h18("h7");
	HasPtr h19("ooh7");
	HasPtr h20("ffh7");
	HasPtr h21("asfh7");
	vec.push_back(h7);
	vec.push_back(h8);
	vec.push_back(h9);
	vec.push_back(h10);
	vec.push_back(h11);
	vec.push_back(h12);
	vec.push_back(h13);
	vec.push_back(h14);
	vec.push_back(h15);
	vec.push_back(h16);
	vec.push_back(h17);
	vec.push_back(h18);
	vec.push_back(h19);
	vec.push_back(h20);
	vec.push_back(h21);
	for(auto c : vec)
		cout << c.get() << endl;
	cout << "sorting" << endl;
	sort(vec.begin(), vec.end());
	cout << "output " << endl;
	for(auto c : vec)
		cout << c.get() << endl;
	return 0;
}
