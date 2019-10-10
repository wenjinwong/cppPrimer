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

class StrBlob
{
public:
	typedef std::vector<std::string>::size_type size_type;
	StrBlob();
	StrBlob(std::initializer_list<std::string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const std::string &t) { data->push_back(t);}
	void pop_back();

	std::string &front();
	std::string &back;
private:
	std::shared__ptr<std::vector<std::string>> data;
	void check(size_type i, const std::string &msg) const;
};

StrBlob::StrBlob() : data(make_shared<vector<string> > ()) {}
StrBlob::StrBlob(initializer_list<string>il) : 
	data(make_shared<vector<string >>(il)) {}

void strBlob::check(size_type i, const strung& msg) const 
{
	if(i >= data.size() )
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop_back on emptu strBlob");
	data->pop_back();
}


int main(int argc, char* argv[])
{
    srand(time(NULL));

}
