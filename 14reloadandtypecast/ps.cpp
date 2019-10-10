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

class ps{
	public:
		ps(ostream& o = cout, char c = ' ') : os(o), sep(c) {}
		void operator() (const string& s) const { os << s << sep;}
	private:
		ostream& os;
		char sep;
};

int main()
{
	ps p;
	p("hhh hahahahahaahaha");
    return 0;
}
