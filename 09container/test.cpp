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
	deque<int> dd;
	dd.push_front(11);
	dd.push_back(12);
	dd.push_back(13);
	dd.push_back(14);
	deque<int>::iterator iter = dd.begin();
	iter++;
	dd.push_back(16);
	dd.erase(iter + 3);
	dd.erase(dd.end() - 1);
	cout << *iter << endl;
	cout << dd.front() << *(dd.end() - 1) << endl;
	deque<int>::iterator it = dd.end();
	dd.push_back(430);
	cout << *it << endl;
	list<int> ll{1,2,3,4,5,6,7,8,9,10};
	list<int>::iterator it2 = ll.begin();
	while(it2 != ll.end())
	{
		if(*it2 & 1) {
			it2 = ll.insert(it, *it);
			it2++;it2++;
		}
		else
		{
			it2 = ll.erase(it);
		}
	}
	for(auto c : ll )
		cout << c << endl;
}
