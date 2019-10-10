#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<sstream>
using namespace std;

istream& func(istream& is)
{
	int s;
	is.clear();
	while(is >> s, !is.eof() )
	{
		if(is.bad()){
			is.clear();
			cerr << "bad" << endl;
		}
		if(is.fail())
		{
			cerr << " fail " << endl;
			cout << s << endl;
			is.clear();
			is.ignore(100, '\n');
			continue;
		}
		cout << s << endl;
	}
	return is;
}

int main()
{
	//func(cin);
	int i;
	istringstream s("aslkdfjklasj  asdklfjas lfklas flkas \n");

	string ss;
	while(s >> ss)
	{
		cout << ss << endl;
	}

	
}
