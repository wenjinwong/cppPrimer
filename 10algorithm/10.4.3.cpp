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
	vector<int> vec1;
	for(int i = 0; i < 10; i++) vec1.push_back(rand() % 10);
	auto iter1 = vec1.rbegin();
	for(; iter1 != vec1.rend(); iter1++)
		cout << *iter1 << endl;

	for(auto iter2 = vec1.end(); iter2 != vec1.begin(); iter2--) 
		cout << *iter2 << endl;


	list<int> list1;
	for(int i = 0; i < 100; i++)
		list1.push_back(rand() % 10);

	auto iter3 = find(list1.rbegin(), list1.rend(), 0);
	cout << *iter3 << endl;

	

}
