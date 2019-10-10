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
#include<deque>
#include<queue>

using namespace std;



int main()
{
    srand(time(NULL));

	deque<int> deq;

	for(int i = 0; i != 100; ++i)
	{
		deq.push_back(rand() % 100);
	}

	int val = count(deq.begin(), deq.end(), 50);
	cout << "val : times:" << val << endl;
	// 10.1

	list<string> ll;
	ll.push_back("aaa");
	ll.push_back("aaa");
	ll.push_back("aaa");
	ll.push_back("aaa");
	ll.push_back("aaa");
	ll.push_back("bbb");
	size_t tim = count(ll.begin(), ll.end(), "aaa");
	cout << tim << endl;
}
