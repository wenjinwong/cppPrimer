#include<iostream>
#include<fstream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

void in(vector<string>& vec)
{
	ifstream read;
	read.open("8.1.2.cpp");
	if(!read)
		cerr << "can not open file" << endl;
	string s;
	while(getline(read, s))
	{
		vec.push_back(s);
	}
	read.close();
}



int main()
{
	vector<string> vec;
	in(vec);
	cout << "in" << endl;
	for(auto c : vec)
	{
		cout << c << endl;
	}



	vector<string> words;
	ifstream input;
	string data = "data";
	input.open(data);
	string one;
	while(input >> one)
	{
		cout << one << endl;
	}

}


