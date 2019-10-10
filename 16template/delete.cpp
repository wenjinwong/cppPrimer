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


class DebugDelete {
public:
	//template<typename U> void operator()(U *p) const 
	//{os << "deleteing unique_ptr" << endl; delete p;}
	DebugDelete(ostream& s = cerr) : os(s) {}
	template<typename T> void operator()(T *p) const 
	{ os << "deleting unique_ptr" << endl ; delete p; }
private:
	ostream& os;
};

int main()
{
	double *p = new double;
	DebugDelete d;
	d(p);
	int *ip = new int;
	DebugDelete()(ip);

	unique_ptr<int, DebugDelete> pp(new int, DebugDelete());
	unique_ptr<string, DebugDelete> sp(new string, DebugDelete());

    return 0;
}
