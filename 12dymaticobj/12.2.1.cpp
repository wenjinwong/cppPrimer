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
#include<cstring>
using namespace std;



int main(int argc, char* argv[])
{
	string s = "hello";
	string ss = "world";
	
	char *pp = new char[ss.size() + s.size() + 1];
	s += ss;
	int i = 0;
	for(auto c : s)
		*(pp + i++) = c;
	for(i = 0; i< s.size(); i++) cout << *(pp+i) << endl;
	delete[] pp;

	string ss1 = "qwoeruweiru";
	string ss2 = "dfkjlasdflja";
	string* sp = new string[2]{ss1, ss2};
/*
	string inp;
	cin >> inp;
	char* pc = new char[10];
	for(auto c: inp)
	{
		cout << c << endl;
		*(pc + i++) = c;
	}
	
	cout << *pc << endl;
*/
char c;
char *r = new char[20];
int l = 0;
while(cin.get(c))
{
	if(isspace(c))
		break;
	r[l++] = c;
	if(l == 20)
	{
		cout << " out of range" << endl;
		break;
	}
}
r[l] = 0;
cout << r;
delete [] r;

}

