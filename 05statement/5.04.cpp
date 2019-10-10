#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	unsigned cnt = 0, max = 0;
	string word, prev, maxs;
	while(cin >> word)
	{
		if(word == "quit"
		  ) break;
		if(word == prev)
			cnt++;
		else
		{
			cnt = 1;
		}
		if(cnt > max)
			max = cnt, maxs = word;
		prev = word;
	}
	cout << maxs << " : " << max << endl;
	// 5.14

	int xx = 0;
	while(cin >> xx)
		cout << xx <<endl;

	for(xx = 0; xx < 5; xx++)
		cout << xx << endl;

	xx=0;
	while(xx < 5)
	{
		cout << xx << endl;
		xx++;
	}
	
	for(; cin >> xx;)
		cout << xx << endl;

	// 5.16

	int ii = 10;
	do {
		int ii = 10;
		ii --;
	}while(ii);
	do{
		cout << "while" << endl;
	}while(--ii);
}
