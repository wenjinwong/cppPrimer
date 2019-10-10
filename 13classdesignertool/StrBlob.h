#ifndef STRBLOB_H
#define STRBLOB_H
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
class StrBlobPtr;
class StrBlob {
friend class StrBlobPtr;
public:
	StrBlobPtr begin();
	StrBlobPtr end();
	StrBlobPtr begin() const;
	StrBlobPtr end() const;
	typedef vector<string>::size_type size_type;
	StrBlob();
	StrBlob(initializer_list<string> il);
	StrBlob(vector<string> *p);
	StrBlob(StrBlob& s);
	StrBlob& operator= (StrBlob& rhs);
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const string &&t) { data->push_back(std::move(t));}
	void push_back(const string& t) && { data->push_back(t);}
	//all in en;
	
	void pop_back();
	string& front();
	string& back();
	const string& front() const;
	const string& back() const;


private:
	shared_ptr<vector<string> > data;
	void check(size_type i, const string &msg) const;

};


StrBlob::StrBlob(initializer_list<string> il) {
	data = make_shared<vector<string> > (il);
}

inline StrBlob::StrBlob() : data(make_shared<vector<string> > ()) { }

inline StrBlob::StrBlob(StrBlob& s) : data(make_shared<vector<string>>(*s.data)) {}
inline StrBlob& StrBlob::operator= (StrBlob &rhs)
{
	data = make_shared<vector<string>>(*rhs.data);
	return *this;
}



inline void StrBlob::check(size_type i, const string &msg) const 
{
	if(i >= data->size())
		throw out_of_range(msg);
}

inline void StrBlob::pop_back() {
	check(0, "pop back on empty StrBlob");
	data->pop_back();
}


inline string& StrBlob::front()
{
	check(0, "front on empty StrBlob");
	return data->front();
}

inline const string& StrBlob::front() const
{
	check(0, "front on empty StrBlob");
	return data->front();
}

inline string& StrBlob::back()
{
	check(0, "back on empty StrBlob");
	return data->back();
}

inline const string& StrBlob::back() const
{
	check(0, "back on empty StrBlob");
	return data->back();
}


class StrBlobPtr {
friend bool eq(const StrBlobPtr&, const StrBlobPtr&);
public:
	StrBlobPtr() : curr(0) {}
	StrBlobPtr(StrBlob& a, size_t sz = 0) : 
		wptr(a.data), curr(sz) {}
	StrBlobPtr(const StrBlob& a, size_t sz = 0) : wptr(a.data),
	curr(sz) {}
	string& deref(int off) const;
	string& deref() const;
	StrBlobPtr& incr();
	StrBlobPtr& decr();
private:
	shared_ptr<vector<string> > check(size_t, const string&) const;
	weak_ptr<vector<string> > wptr;
	size_t curr;
};


inline shared_ptr<vector<string> > StrBlobPtr::check(size_t sz, const string& msg)
	const
{
	auto ret = wptr.lock();
	if(!ret)
		throw runtime_error("unbound StrBlobPtr");
	if(sz >= ret->size())
		throw out_of_range(msg);
	return ret;
}

inline string& StrBlobPtr::deref() const
{
	auto p = check(curr, "deref higher on StrBlob");
	return (*p)[curr];
}

inline string& StrBlobPtr::deref(int off) const 
{
	auto p = check(curr + off, "dereference past end");
	return (*p)[curr + off];
}

inline StrBlobPtr& StrBlobPtr::incr() 
{
	check(curr, "curr higher on StrBlob");
	++curr;
	return *this;
}

inline StrBlobPtr& StrBlobPtr::decr()
{
	--curr;
	check(curr, "decrement past begin of StrBlobPtr");
	return *this;
}

inline StrBlobPtr StrBlob::begin() { return StrBlobPtr( *this); }
inline StrBlobPtr StrBlob::end() {
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

inline StrBlobPtr StrBlob::begin() const 
{
	return StrBlobPtr(*this);
}

inline StrBlobPtr StrBlob::end() const 
{
	auto ret = StrBlobPtr(*this, data->size());
	return ret;
}

inline bool eq(const StrBlobPtr& lhs, const StrBlobPtr &rhs)
{
	auto  l = lhs.wptr.lock(), r = rhs.wptr.lock();
	if(l == r)
		return (!r || lhs.curr == rhs.curr);
	else
		return false;
}

inline bool neq(const StrBlobPtr &lhs, const StrBlobPtr &rhs)
{
	return !eq(lhs, rhs);
}
#endif
