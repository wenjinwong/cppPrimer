#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
using namespace std;


string f(string old, string oldVal, string newVal)
{
	
}

string f45(string arg, string front, string back)
{
	arg.insert(0, front);
	//arg.append(back); 
	//9.45
	//9.46
	arg.insert(arg.size(), back);
	return arg;
}

int main()
{
    srand(time(NULL));
	string arg = "wenjin";
	string front = "Mr.";
	string back = "III";
	cout << f45(arg, front, back);
}

