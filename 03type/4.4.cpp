#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int i;
	double d;
	d = i = 3.5;
	cout << d << "  " << i << endl; //4.13
	i = d = 3.5;
	cout << d << "  " << i << endl;

//	if(42 = i) cout << "42 == i" << endl;
	if(i = 42) cout << " i == 42" << endl;// 4.14

	double dval; int ival; int *pi;
	dval = ival = 0 ;pi = 0;// 4.15
	
	if( i = 1 == 0) cout <<i << endl;

}
