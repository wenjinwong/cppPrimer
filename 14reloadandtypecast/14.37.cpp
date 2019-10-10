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

class IntCompare
{
	public:
		IntCompare(int v) : val(v) {}
		bool operator()(int v) {return val == v;}
	private:
		int val;
};

int main()
{
	vector<int> vec = {1,2,3,2,1};
	const int oldVal = 2;
	const int newVal = 200;
	IntCompare icmp(oldVal);
	replace_if(vec.begin(), vec.end(), icmp, newVal);
	for(auto c : vec)
		cout << c << endl;
	return 0;
}
