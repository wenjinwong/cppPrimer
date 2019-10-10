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
#include<initializer_list>
#include<functional>
#include<bitset>
#include<regex>
using namespace std;
int main()
{
	string phone = "(\\()?(\\d{3}) (\\))?[-. ])?(\\d{3}) ([-. ])?(\\d{4})";
	try{
		regex r(phone);
	}
	catch(regex_error e)
	{
		cout << e.what() << endl;
	}
	regex r(phone);
	smatch m;
	string s;
	string fmt = "$2.$5.$7";
	while(getline(cin, s))
		cout << regex_replace(s, r, fmt) << endl;
}
