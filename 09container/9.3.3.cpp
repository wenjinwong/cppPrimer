#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
using namespace std;

int main()
{

	list<int> ll{1,2,3,4,5};
	ll.erase(ll.begin(), ll.begin());
	ll.erase(ll.end(), ll.end());
	cout << ll.size() << endl;

	int ia[] = {0, 1, 2, 3, 4, 5, 6,7,8,9};
	vector<int> ii(begin(ia), end(ia));
	for(auto c : ii)
		cout << c << endl;

	vector<int>::iterator it = ii.begin();

	while(it != ii.end())
	{
		it = *it & 1 ? ii.erase(it) : ++it;
	}
	for(auto c : ii)
		cout << c << endl;
}
