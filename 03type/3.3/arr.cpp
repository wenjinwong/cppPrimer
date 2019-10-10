#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int print(int a[], int *b, int *e)
{
	if(b == e) return 0;
	cout << *b;
	print(a, b++, e);
}
int main()
{
/*	int a[2] = { 1, 2};
	int *b = a;
	int *e = &a[2];
	for(*b; b != e; ++b)
		cout << *b;
		*/
	int a[3] = {1, 2, 3,};
	int *b = begin(a);
	int *e = end(a);
	int *p = &a[2];
	cout << p[-3] << endl;
	cout << a[0] << " " << a[1] << " " << a[2] <<endl;
}
