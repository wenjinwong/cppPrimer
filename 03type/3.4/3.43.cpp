#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;
using int_arry = int[3];
int main()
{
	int_arry ia[4] = { {1, 2, 3}, {3 , 2, 1}, {1, 2, 3}, {3, 2, 1}};
	for( int (&row)[3] : ia)
		for( auto col : row)
			cout << col << "  ";
	cout << endl;
	for(int i = 0; i < 4; i++)
		for(int j = 0; j < 3; j++)
			cout << ia[i][j];
	cout << endl;
	for(int (*p)[3] = begin(ia); p != end(ia); p++)
		for(int *m = begin(*p); m != end(*p); m++)
			cout << *m << "  ";
	cout << endl;
	for(int_arry *p = ia; p != ia + 4; p++)
		for(int *q = *p; q != *p + 4; ++q)
			cout << *q << ' ';
	cout << endl;
	int_arry *p = ia;
	cout << *p +4;
	cout << endl;
	for(auto &a : ia)
		for(auto g : a)
			cout << g;
	cout << endl;
}
