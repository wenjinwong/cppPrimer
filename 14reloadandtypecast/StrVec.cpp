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

class StrVec{
public:
	StrVec &StrVec::operator=(initializer_list<string> il)
	{
		auto data = alloc_n_copy(il.beginO(), il.end());
		free();
		elements = data.first;
		first_free = cap = data.second;
		return *this;
	}
private:
	vector<string> vec;
}

int main()
{
    return 0;
}
