#include<iostream>
#include<cctype>
#include<string>
#include<vector>

using namespace std;

int main()
{
/*	do {
		cout << "enter two string" << endl;
		string s1, s2;
		cin >> s1 >> s2;
		cout << (s1.size() > s2.size() ? s1 : s2) << endl;
	}while (cin);
	// 5.19
*/
	//5.20
	/* string prev, curr;
	while(cin >> curr)
	{
		if(curr.size() > 0 && curr[0] > 0X60 && curr[0] < 0X7C)
			continue;
		switch(prev == curr)
		{
			case 1:
				cout << curr << endl;
				return 0;
			case 0:
				prev = curr;
				break;
		}
	} */

	//5.22

	int test = 9;
	if(test == 9)
		goto test;
	cout << "next end" << endl;
end:
	cout << "end:" << endl;
	{
test:
		cout << "test" << endl;
	}

	int tt = 0;
	for(tt; tt < 5; tt++)
	{
		switch(tt)
		{
			case 3:
				continue;
			default:
				;
		}
	}
	cout << tt << endl;
}
