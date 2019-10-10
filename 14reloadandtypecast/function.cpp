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

int add(int a, int b) { return a + b; }

class divide{
public:
	int operator()(int a, int b)
	{
		if(b != 0)
			return a / b;
		return 0;
	}
};


int main()
{
	auto mod = [](int a, int b) { return a % b;};

	map<string, function<int(int, int)>> binops = {
		{"+", add},
		{"-", std::minus<int>()},
		{"/", divide()},
		{"*", [](int i, int j) {return i * j; }},
		{"%", mod}
	};

	while(true)
	{
		string flag;
		int a, b;
		cin >> a >> flag >> b;
		cout << binops[flag](a, b);
	}

    return 0;
}
