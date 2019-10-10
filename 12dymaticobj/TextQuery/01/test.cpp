#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<algorithm>
#include<numeric>
#include<functional>
#include<sstream>
#include<set>
#include<map>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>
#include"TextQuery.h"
#include"QueryResult.h"

using namespace std;

void runQueries(ifstream& infile)
{
	TextQuery tq(infile);
	//tq.show();
	QueryResult qr(tq);
	do
	{
		cout << "enter word to look for, or q to quit: ";
		string s;
		if(!(cin >> s) || s == "q") break;
		qr.query(s);
		//print(cout, tq.query(s)) << endl;
	}while(1);
}


int main(int argc, char** argv)
{
	ifstream infile(argv[1]);
	runQueries(infile);
	return 0;
}
