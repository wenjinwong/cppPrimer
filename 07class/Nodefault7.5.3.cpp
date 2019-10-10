#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

class NoDefault
{
	public:
	NoDefault(int i) { val = i;}
	int val;
};

class C{
	public:
	NoDefault nod;
	C(int i) : nod(i) {}
};

int main()
{
	C c(8);
}
