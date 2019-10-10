#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	unsigned char c = 0001; // 00101101
	cout << (c << 2) << endl;
	unsigned char q = 'q';  // 01110001
	cout << (q << 6) << endl;
	// 4.25

	unsigned int quiz1 = 0;
	quiz1 |= (1 << 27);
	bool p27 = quiz1 & ~0;
	cout << p27;
}
