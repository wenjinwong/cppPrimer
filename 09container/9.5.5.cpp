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

class foo{
	public:
		foo(string s);
		unsigned year, mouth, day;
};

foo::foo(string s)
{
	string::size_type pos = 0;
	if(pos = s.find_first_of(",") && pos != string::npos)
	{
		day = stoi(s.substr(s.find_first_of("123456789")) );
		cout << day << endl;
	}
}

int main()
{
    srand(time(NULL));
	vector<string> vec;
	for(int i = 1; i < 10; i++)
	{
		vec.insert(vec.begin(), to_string((rand() % 100)));
	}

	int sum = 0;
	for(auto c : vec)
	{
		sum += stoi(c);
	}
	foo f("jan 1, 1900");
	cout << sum << endl;

}
