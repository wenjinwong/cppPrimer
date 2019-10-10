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

	deque<int> ll{1, 2,1 ,3 , 5};
	cout << ll[3] << endl;

//	cout << ll.at(8) << endl;

	list<int> lll{1,2,3,4};
	auto &c = ll.front();
	cout << c << endl;
	c = 8;
	auto cc = ll.end();
	cout << *(--cc) << endl;
	
	list<int> llll;
	// llll.pop_front();
//core dump invalid pointer	
	//llll.erase(llll.end());
	cout << llll.back() << endl;
}
