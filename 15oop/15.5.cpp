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
using namespace std;

class Base {
public:
	int pub_mem = 1;
protected:
	int pro_mem = 2;
private:
	int pri_mem = 3;
};

class DerPub : public Base {
	int f() { cout << pro_mem << endl; }
	void memfcn(Base& b) { b = *this;}
};

class DerPro : protected Base {
	int f() { cout << pro_mem << endl; }
	void memfcn(Base& b) { b = *this;}
};


class DerPri : private Base {
	int f() {
		Base *ppp;
		DerPri pp;
		ppp = &pp;
		cout << pro_mem << endl; }	void memfcn(Base& b) { b = *this;} 
	
};

int main()
{
	DerPub d1;
	DerPro d2;
	DerPri d3;
	Base *p = &d1;
	//p = &d2;
 //   p = &d3;
	return 0;
}
