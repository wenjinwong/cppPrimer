#ifndef SBH_H
#define SBH_H
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

class sbp{
	public:
		
		sbp() : curr(0) {}
		sbp(sbp &a, size_t sz = 0) : 
			wptr(a.data), curr(sz) {}
		string& deref() const;
		sbp& intcr();
	private:
		shared_ptr<vector<string> >
			check(size_t, const string&) const;
		weak_ptr<vector<string> > wptr;
		size_t curr;
};


shared_ptr<vector<string> > sbp::check(size_t i,
	const string& msg) const
{
	auto ret = wptr.lock();
	if(!ret)
		throw runtime_error("unbound sbp");
	if(i >= ret -> size() )
		throw std::out_of_range(msg);

	return ret;
}

string& sbp::deref() const
{
	auto p = check(curr, "dereference past end");
	return (*p)[curr];
}

sbp& sbp::incr()
{
	check(curr, "increment past end of sbp");
	++curr;
	return *this;
}









#endif
