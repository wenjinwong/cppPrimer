#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

void swap(int *&a, int *&b)
{
	int *p;
	p = a;
	a = b;
	b = p ;
}

void print(const int ia[10])
{
	for(size_t i = 0; i != 10; ++i)
		cout << ia[i] << endl;
}

int main()
{
	int *p;
	int a = 8;
	p = &a;
	cout << p[0];
	int n[2];


	//6.21
	int a1 = 2, a2 = 3;
	int *pa1 = &a1, *pa2 = &a2;
	swap(pa1, pa2);
	cout << "p1" << *pa1 << "  p2 "<<*pa2 << endl;
	int ia[10] = {1,2,3,4,5,6,7,8,9,10};
	print(ia);
}
