#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int isEq(int a[], int b[], int index, int num)
{
	if(index == num) return 1;
	if(a[index] == b[index]) 
		isEq(a, b, index + 1, num);
	else
		return 0;
}

int main()
{
	int a[10] = {1, 2, 3, 4, 5, 6, 7, 8, 9, 10};
	int *p = a;
	int *p1 = &a[5];
	p += p - p1;
	cout  << *p << endl;
	for(auto i : a) 
	{
		int *p = &i;
		*p = 0;
	}
	int a1[3] = {1, 2, 3};
	int a2[3] = {1, 2, 4};
	if(isEq(a1, a2, 0, 3)) cout << "ok";
	else cout << "no";
	return 0;	
}
