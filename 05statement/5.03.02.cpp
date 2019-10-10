#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	string text;
	getline(cin, text);
	int acnt = 0, ucnt = 0, space = 0, icnt = 0, ecnt = 0, ocnt = 0;
	for(auto c : text)
	{
		c = tolower(c); //5.10
		if(c == 'a')
			acnt++;
		else if(c == 'e')
			ecnt++;
		else
			if(c == 'o')
				ocnt++;
			else if(c == 'u')
				ucnt++;
			else if(c == 'i')
				icnt++;
			else
				if(isspace(c))
					space++;
	}
	cout << "a: " << acnt << "  u: " << ucnt << "  e: " << ecnt << "  i:  "
		<<icnt << "  o: " << ocnt << "  space:  " << space << endl;
// 5.9
	int testVal = 55;
	switch(testVal)
	{
		case 1345:
			int jval;
			break;
		case false:
			jval = 2;
			break;
	}
	

	constexpr unsigned ival = 512, jval = 1024, kval = 4096;
	unsigned buffsize;
	unsigned swt = 1024;
	switch(swt)
	{
		case ival:
			buffsize = ival * sizeof(int);
			break;
		case jval:
			buffsize = jval * sizeof(int);
			break;
		case kval:
			buffsize = kval * sizeof(int);
			break;
	}
	cout << endl << buffsize << endl; // 5.13
}
