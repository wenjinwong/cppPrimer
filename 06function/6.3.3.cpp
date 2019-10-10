#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

//6.36
string (&ref())[10];
auto tail() -> int (&)[10];
typedef int arrT[10];
arrT &iref(void);
arrT aa;
decltype(aa) *declfunc();
auto arrPtr() -> int(&)[10];

int func(int i, int j = 8, char c = 'c');

int func(int i = 88, int j, char c);

constexpr int new_sz() { return 33;}
inline int inlinefunc()
{
	return 1;
}
int main()
{
	constexpr int foo = new_sz();
	cout << inlinefunc() << endl;
	
	func(100, 80, 'c');

}


int func(int i, int j, char c )
{
	return 0;
}
