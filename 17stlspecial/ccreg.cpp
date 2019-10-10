#include<iostream>
#include<cctype>
#include<string>
#include<tuple>
#include<regex>
using namespace std;

int main()
{
	regex r("[[:alnum:]]+\\.c[c,pp]{1,}$", regex::icase);
    smatch results;
	string filename;
	while (cin >> filename)
		if(regex_search(filename, results, r))
			cout << results.str() << endl;
	return 0;
}
