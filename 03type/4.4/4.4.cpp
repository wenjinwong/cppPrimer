#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int ans = ((12/3) * 4)+5*5 + (24%4)/2;
	int ans1 = 12/3 * 4 + 5 *5 + 24 % 4 / 2;
	if(ans == ans1)
		cout << "==" << endl;

	short p1 = 32767;
	cout << p1 + 2 << endl;
	unsigned short m = 0u;
	cout << m -23 << endl;
	cout << (short)(p1 * 2);
}
