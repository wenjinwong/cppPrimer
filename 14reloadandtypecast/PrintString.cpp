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

class PrintString{
private:
	istream& is;
	string s;
public:
	PrintString(istream& i = cin):is(i)
	{
//		is = i;
		is >> s;
	}

	string& operator()()
	{
		return s;
	}
};


int main()
{
	PrintString ps(cin);
	cout << ps();
    return 0;
}
