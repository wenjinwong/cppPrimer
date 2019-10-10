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

class SmallInt {
private:
	int val;
public:
	SmallInt(int v = 0) : val(v) {}
	explicit operator int() const { return val;}
	explicit operator bool() const { return val;}
};

int main()
{
	SmallInt s(10);
	cout << int(s);
	if(s)
		cout << "fi" << endl;
	double d = static_cast<int>(s) + 3.13;
	cout << endl << d << endl;
	int i = 42;
	//cin << i;
    return 0;
}
