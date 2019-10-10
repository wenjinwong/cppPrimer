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
int add(int a, int b)
{
	return a + b;
}

int main()
{
	auto mod = [](int a, int b) { return a % b; };
	cout << mod(10, 3);

	function<int(int,int)> f3 = [](int i, int j) {
		return i * j; };
	cout << f3(5, 5);
	map<string, int(*)(int, int)> binops;
	binops.insert({"+", add});

	int a = 10, b = 5;
	cout << binops["+"](a, b);


    return 0;
}
