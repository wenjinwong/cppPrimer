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
#include<tuple>
using namespace std;

using std::regex;
using std::sregex_iterator;
using std::smatch;
using std::regex_error;

bool valid(const smatch& m)
{
	if(m[1].matched)
		return m[3].matched && (m[4].matched == 0 || m[4].str() == " ");
	else
		return !m[3].matched && m[4].str() == m[6].str();
}

int main()
{
	string phoen = "(\\() ? (\\d{3})(\\))?([-.]?(\\d{3})([-.]?)(\\d{4})";
	regex r(phone);
	smatch m;
	string s;
	while(getline(cin, s)) {
		for(sregex_iterator it(s.begin(), s.end(), r), end_it; it!=end_it; ++it)
		if(valid(*it))
			cout << "valid: " << it->str() <<< endl;
		else 
			cout << " not valid: " << it->str() << endl;
	}
	return 0;
}
