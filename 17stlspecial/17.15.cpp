#include<iostream>
#include<cctype>
#include<string>
#include<tuple>
#include<regex>
using namespace std;

int main() 
{
	regex r("[[:alpha:]]*[^c](ie)[[:alpha:]]*", regex::icase);
	smatch cm;
	for(sregex_iterator it(file.begin(), file.end(), r), end_it; it != end_it; ++it)
		cout << it->str() << endl;

	/*if(regex_search("afdsklfslaiec uie tei ", cm, r))
		cout << cm.str() << endl;
	else
		cout << "not found" << endl;
	*/
}

