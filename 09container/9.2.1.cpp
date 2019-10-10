#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<ctime>
#include<cstdlib>
#define numm 9;
using namespace std;
typedef vector<int>::iterator iter;
bool search(vector<int>::iterator begin, vector<int>::iterator end, int val)
{
	while(begin != end && *begin 
			!= val)
	{
		begin++;
	}
	return begin == end ? 0 : 1;
}

iter& search(iter begin, iter end, double val)
{
	while(begin != end && *begin != val)
		begin++;
	return begin == end ? end : begin;
}

int main()
{
	vector<int> vec;
	
	srand(time(NULL));
	for(int i = 0; i < 100; i++)
		vec.push_back(rand() % 100);
	cout << search(vec.begin(), vec.end(), 50);
	// 9.3
	iter it = search(vec.begin(), vec.end(), 50.0);
	if(it != vec.end())
	cout << endl << *it << endl;
	
}
