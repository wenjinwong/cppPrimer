
#include<iostream>
#include<cctype>
#include<string>
#include<tuple>
#include<regex>
using namespace std;
int main() 
{
	try{
		for(int i =1; i< 100; i++)
		{
			regex r("[[:alnum:]]+\\.(cpp|cxx|cc)$", regex::icase);
		}
		}
	catch(regex_error e)
	{
		cout << e.what() << "  code: " << e.code() << endl; 
	}
}
