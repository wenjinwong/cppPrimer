#ifndef MY_STRBLOB_H
#define MY_STRBLOB_H

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
#include<stdexcept>
#include<initializer_list>
using namespace std;

class StrBlobPtr;

class StrBlob {
public:
	friend class StrBlobPtr;
	
	StrBlobPtr begin();
	
	StrBlobPtr end();

	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }

	void push_back(const string& t) { data->push_back(t);}
	void pop_back();
	string& front();
	const string& front() const;
	string& back();
	const string& back() const ;
private:
	shared_ptr< std::vector<std::string> > data;
	void check(size_type i, const string& msg) const;
};

StrBlob::StrBlob() : data (make_shared<vector<string>> ()) {}
StrBlob::StrBlob(initializer_list<string> il): data(
		make_shared<vector<string> >(il)) {}

void StrBlob::check(size_type i, const string& msg) const
{
	if(i >= data->size())
		throw out_of_range(msg);
}

string& StrBlob::front()
{
	check(0, "front on empty strblob");
	return data->front();
}

const string& StrBlob::front() const 
{
	check(0, "front on empty strblob");
	return data->front();
}

string& StrBlob::back()
{
	check(0, "back on empty strblob");
	return data->back();
}

const string& StrBlob::back() const 
{
	check(0, "back on empty strbloc");
	return data->back();
}

void StrBlob::pop_back()
{
	check(0, "pop back onempty strblob");
	data->pop_back();
}

class StrBlobPtr {
public:
    StrBlobPtr() : curr(0) {}
	StrBlobPtr(const StrBlob& a, size_t sz = 0) :	wptr(a.data), curr(sz) {}
	string& deref()
	{
		auto p = check(curr, "deference past end");
		return (*p)[curr];
	}
	StrBlobPtr& incr()
	{
		check(curr, "increment past end of strblobptr");
		++curr;
		return *this;
	}
private:
	shared_ptr<vector<string>> check(size_t i, const string& s)
		{
			auto ret = wptr.lock();
			if(!ret)
				throw runtime_error("unbound StrBlobPtr");
			if(i >= ret->size())
				throw out_of_range(s);
			return ret;
		}
	weak_ptr<vector<string> > wptr;
	size_t curr;
};


inline StrBlobPtr StrBlob::begin()
{
	return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end()
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}
#endif
