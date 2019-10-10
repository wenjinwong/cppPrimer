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


int main()
{
	srand(time(NULL));
	vector<string> svec;
	svec.reserve(1024);
	string word;
	while(cin >> word && word != "end")
		svec.push_back(word);
	svec.resize(svec.size() + svec.size() / 2);
	cout << svec.size() << endl << svec.capacity() << endl;

}
