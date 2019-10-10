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
template<class type>
class vec;
template<class type> ostream& operator<<(ostream&, vec<type>&);

template<class type>
class vec {
public:
	vec& operator++()
	{
		val++;
		return *this;
	}
	friend ostream& operator<< <type>(ostream& os,vec<type>&);
	type val = 0;
};

template<class type>
ostream& operator<< (ostream& os,vec<type> &rhs)
{
	os << rhs.val << endl;
	return os;
}





int main()
{
	vec<int> v;
	++v;
	cout << v;
    return 0;
}
