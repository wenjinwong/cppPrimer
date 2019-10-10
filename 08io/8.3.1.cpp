#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<sstream>
#include<fstream>
using namespace std;

int main(int argc, char *argv[])
{
	vector<string> vec;
	string sss = argv[1];
	ifstream in(sss);
	string line;
	while(getline(in, line))
	{
		vec.push_back(line);
	}

	for(auto c : vec)
	{
		istringstream word(c);
		string a;
		while(word >> a)
		{
			cout << a << endl;
		}
	}


}
