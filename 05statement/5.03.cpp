#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
/*	char* p[5];
	p[0] = "A";
	p[1] = "b";
	p[2] = "C";
	p[3] = "D";
	p[4] = "e";
	unsigned score = 0;
	while(cin >> score)
	{
		if(score < 60)
			cout << p[4];
		else
			cout << p[score / 10];
	}
*/
/*	vector<string> vec = {"a", "b", "c", "d" , "e"};
	unsigned score;
	while(cin >> score)
	{
		if(score < 60)
			cout << vec[0];
		else
			cout << vec[(score -60)/10];
		cout << ((score < 60) ? vec[0] : vec[(score - 60)/10]) << endl;
 }*/
	int ival1 = 1, ival2 = 2;
	if(ival1 != ival2)
	ival1 = ival2 = 0;
	cout << ival1 << ival2;
}
