#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<ctime>
#include<cstdlib>

using namespace std;

int main()
{
	vector<int> vec;
	srand(time(NULL));
	for(int i = 0; i < 3; i++)
	{
		vec.push_back(rand() % 100);
	}
	cout << vec.size() << endl << vec.capacity() << endl;

	vec.push_back(88);
	vec.push_back(88);
	cout << vec.size() << endl << vec.capacity() << endl;
	
	vec.shrink_to_fit();
	cout << vec.size() << endl << vec.capacity() << endl;

	vec.reserve(1000);
	
	cout << vec.size() << endl << vec.capacity() << endl;
	vec.reserve(1000);
	vec.reserve(100);
	cout << vec.size() << endl << vec.capacity() << endl;

	for(int i = 0; i < 10000; i++) vec.push_back(rand() % 100);
	

	cout << vec.size() << endl << vec.capacity() << endl;
}
