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
#include<functional>
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;


class Class {
	//
};

class Base : public Class {
	//
public:
	Base() ival(0) {}
	Base(int i) : ival(i) {} 
	Base(const Base& b) : ival (b.ival) {}
protected:
	int ival;
};

class D1 : virtual public Base {
//
public:
	D2() : Base() {}
	D2(int i) : Base(i) {}
	D2(const D2& d) : Base(d) {}
};

class D1 : virtual public Base {
	//
public:
	D1() : Base(0) {};
	D1(int i) : Base(i) {}
	D1(const D1& d) : Base(d) {}
};

class M1 : public D1, public D2 {
	//
public:
	M1() : Base(0) {}
	M1(int i) : Base(i), D1(i), D2(i) {}
	M1(const M1& m) : Base(m), D1(m), D2(m) {}
};

class FInal : public Mi, public Class {
	//
public:
	Final() : Base(0) {}
	Final(int i) : Base(i) , M1(i) {}
	Final(const Final& f) : Base(f), M1(f) {}
};


int main()
{
    return 0;
}
