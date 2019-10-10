#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<fstream>
#include<sstream>
using namespace std;

class Person{
public:
	string name;
	unsigned num;
}
;

int main(int argc, char* argv[])
{
	fstream in(argv[1]);
	string line;
	while(getline(in, line))
	{
		ostringstream sline(line);
		cout << sline.str() << endl;
	}
		
}
