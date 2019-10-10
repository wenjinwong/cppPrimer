#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	//4.9
	const char *cp = "Hello World";
	if(cp && *cp) cout << cp << *cp << endl;

	int tem;//4.10
	while(cin >> tem && tem != 42)
		cout << tem << endl;
	//4.11

	unsigned a = 4, b = a -1, c = b - 1, d = c - 1;
	if(a > b && b > c && c > d)
		cout << unsigned(d - 2) << endl;// 4.11

	//4.12
	int i = 1, j = 1, k = 1;
	cout <<endl << (i != j < k);

}
