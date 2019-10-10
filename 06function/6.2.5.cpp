#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main(int argc, char *arg[])
{
	string cat;
	cout  << argc << endl;
//	cout << cat + arg[1] + arg[2] << endl;
	for(size_t i = 1; i < argc; ++i)
		cat += arg[i];
	cout << cat;
}
