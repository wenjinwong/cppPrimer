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

using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));
	list<int> l1;
	for(int i = 0; i < 100; i++)
		l1.insert(l1.begin(), rand() % 50);
	l1.sort();
	l1.unique();
	
	for(auto c : l1)
		cout << c << endl;
	list<int> l2;
	for(int i = 0; i < 100; i++)
		l1.insert(l2.begin(), rand() % 50);
	
	l2.splice(l2.begin(), l1);
	for(auto c : l2)
	{
		cout << c << endl;
	}

}
