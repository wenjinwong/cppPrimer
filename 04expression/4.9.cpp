#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int f()
{
	return 32;}

int main()
{
	vector<int> vec;

	constexpr size_t sz = sizeof(vec);
	cout << sizeof(int*) << " " << sizeof(int);
//	cout << endl << sz;
//	string s = "hello";
//	cout << endl << sizeof(s);
	int x[10]; int *p = x;
	cout << sizeof(x) / sizeof(*x) << endl;
	cout << sizeof(p) / sizeof(*p) << endl;
	int xx = 0, y = 0;
	cout << (sizeof 0);
	cout << endl << sizeof f();
	cout << endl;
	cout << (xx-2, y+5);
	cout << endl;
	wchar_t ch = 'c';
	int ii = 900;
	cout << ch + ii << endl;
}
