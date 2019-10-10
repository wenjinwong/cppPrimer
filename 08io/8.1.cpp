#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

istream& f(istream& in)
{
	int v;
	while(in >> v, !in.eof())
	{
		if(in.bad())
			throw runtime_error("io stream error");
		if(in.fail())
		{
			cerr << "data error" << endl;
			in.clear();
			continue;
		}
		cout << v;
	}
	in.clear();
	return in;
}

int main()
{
	f(cin);
	return 0;

}
