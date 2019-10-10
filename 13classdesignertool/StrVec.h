#ifndef STRVEC_H
#define STRVEC_H
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


class StrVec {
public:
	StrVec() : elements(nullptr), first_free(nullptr), cap(nullptr){}
	StrVec(const StrVec&);
	StrVec(const initializer_list<string>& li) { 
		auto newdata = alloc_n_copy(li.begin(), li.end());
		first_free = cap = newdata.second;
		elements = newdata.first;
	}
	StrVec(StrVec &&s) noexcept : elements(s.elements), first_free(s.first_free), cap(s.cap)
	{
		s.elements = s.first_free = s.cap = nullptr;
	}
	
	StrVec& operator=(StrVec &&rhs) noexcept
	{
		if(this != &rhs)
		{
			free();
			elements = rhs.elements;
			first_free = rhs.first_free;
			cap = rhs.cap;
			rhs.elements = rhs.first_free = rhs.cap = nullptr;
		}
		return *this;
	}

	//StrVec(StrVec &&rhs);
	StrVec& operator=(const StrVec&);
	~StrVec();
	void push_back(const string&);
	void push_back(string&&);
	size_t size() const { return first_free - elements; }
	size_t capacity() const { return cap - elements;}
	string* begin() const { return elements; }
	string* end() const { return first_free; }
	void reserve(size_t n);
	void resize(size_t n, const string& s);
	void resize(size_t n);
private:
	string* first_free;
	string* elements;
	string* cap;

	allocator<string> alloc;
	void chk_n_alloc() { if(size() == capacity()) reallocate(); }
	pair<string*, string*> alloc_n_copy(const string*, const string*);
	void free();
	void reallocate();
	void reallocate(size_t newcapacity);

};

inline void StrVec::reallocate(size_t newcapacity)
{
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto src = elements;
	for(size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*src++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}


void StrVec::push_back(string &&s)
{
	chk_n_alloc();
	alloc.construct(first+free++, std::move(s));
}

inline void StrVec::reserve(size_t n) {if(n > size()) reallocate(n);}

inline void StrVec::resize(size_t n)
{
	if(n > size() )
	{
		while(size() < n) 
			push_back("");
	} else if(n < size() ) {
		while(size() > n)
			alloc.destroy(--first_free);
	}
}


void StrVec::resize(size_t n, const string& s)
{
	if(n > size() )
	{
		while(size() < n)
			push_back(s);
	}
}

void StrVec::push_back(const string& s)
{
	chk_n_alloc();
	alloc.construct(first_free++, s);
}

pair<string*, string*> StrVec::alloc_n_copy(const string* b, const string *e)
{
	auto data = alloc.allocate(e - b);
	return {data, uninitialized_copy(b, e, data)};
}


/*
void StrVec::free()
{
	if(elements)
	{
		for(auto p = first_free; p != elements; )
			alloc.destroy(--p);
		alloc.deallocate(elements, cap - elements);
	}
}
*/
//free 2

void StrVec::free()
{
	if(elements)
	{
		for_each(elements, first_free, [&](string &curr) { alloc.destroy(&curr);});
		alloc.deallocate(elements, cap - elements);
	}
}

StrVec::StrVec(const StrVec &s)
{
	auto newdata = alloc_n_copy(s.begin(), s.end());
	elements = newdata.first;
	first_free = newdata.second;
}

StrVec::~StrVec() { free(); }

StrVec& StrVec::operator=(const StrVec &rhs)
{
	auto data = alloc_n_copy(rhs.begin(), rhs.end());
	free();
	elements = data.first;
	first_free = cap = data.second;
	return *this;
}

void StrVec::reallocate()
{
	auto newcapacity = size() ? 2 * size() : 1;
	auto newdata = alloc.allocate(newcapacity);
	auto dest = newdata;
	auto elem = elements;
	for(size_t i = 0; i != size(); ++i)
		alloc.construct(dest++, std::move(*elem++));
	free();
	elements = newdata;
	first_free = dest;
	cap = elements + newcapacity;
}


#endif
