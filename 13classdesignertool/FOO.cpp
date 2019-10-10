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


class Foo {
public:
	Foo() = default;
	Foo(const Foo& f) : data(f.data) {}
	void push_back(int i) { data.push_back(i); }

	Foo sorted() const & {
		cout << "left sort:  " <<endl;
		return Foo(*this).sorted(); 
		//return tmp.sorted();
	}
	
	Foo sorted() && 
	{
		cout << " rvalue sort: " << endl;
		sort(data.begin(), data.end());
		return *this;
	}
	/*
	Foo sorted() const & {
		Foo ret(*this);
		return ret.sorted();
	}
	*/
	//Foo sorted() const & { return Foo(*this).sorted(); }
private:
	vector<int> data;
};

int main()
{
	Foo f1;
	f1.push_back(1);
	f1.push_back(2);
	f1.push_back(1);
	f1.sorted();
   

}
