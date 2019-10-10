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


class Len{
private:
	int len;

public:
	Len(int n) : len(n) {}
	bool operator()(string s)
	{
		if(s.size() >=1 && s.size() <= 9)
			return true;
		return false;
	}
};

int main()
{
	Len l1(2);
	vector<string> vs{"1", "22", "333", "4444"};
	cout << count_if(vs.begin(), vs.end(), l1);
	int sz = 9;
	cout << count_if(vs.begin(), vs.end(), [sz](string s) {
			if(s.size() < sz) return true;
			return false;
			}
			);
    return 0;
}
