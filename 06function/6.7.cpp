#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int f(int a, int b)
{
	cout << "f() " << endl;
	return 0;
}

int main()
{
	using funcp = decltype(f);
//	using fp = int (*)(int, int);
//	auto ffp(int) -> int (*)(int, int);
//	int (*f(int))(int, int);
	funcp *pp = &f;
	pp(1, 3);
	vector<funcp*> vec;
	vec.push_back(f);
	vec[0](1, 2);
	
}
