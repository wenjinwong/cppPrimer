#include<regex>
#include<iostream>
using namespace std;

int main() 
{
	char *p = "test";
	regex rr(p, 21);
	string pp{'a','a'};
	string pattern("[^c]ei");
	pattern = "[[:alpha:]]*" + pattern + "[[:alpha:]]*";
	regex r(pattern);
	smatch results;

	string test_str = "recript freind theif receive";
	if(regex_search(test_str, results, r))
		cout << results.str() << endl;
	rr.assign("y??");
	r.mark_count();
	r.flags();

}
