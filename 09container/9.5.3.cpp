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
	string source = "ab2c3d7R4E6";
	string pattern = "0123456789";
	cout << source.find_first_of(pattern) << endl;
	cout << source.find_first_not_of(pattern) << endl;

	//9.47

	string name = "r2d2";
	cout << (string::npos == pattern.find(name) ) << endl;
	//9.48
	string::size_type pos = 0;
	while( pos < source.size() && (pos = source.find_first_of(pattern, pos)) && pos != string::npos)
	{
		cout << "found number at index: " << pos << "element is" << name[pos]
			<< endl;
		++pos;
	}

	string s5 = "pi = 3.14)";
	double d = stod(s5.substr(s5.find_first_of("+-.123456789")));
	cout << d << endl;
}
