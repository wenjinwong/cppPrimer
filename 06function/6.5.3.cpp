#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<ctime>
#include<cstdlib>
#include<cassert>
using namespace std;

void printVec(const vector<int> vec, int i)
{
#ifndef NDEBUG	
	cerr << "msg: " << __FILE__ << "  " << __LINE__ << "  " << __DATE__ <<
		__TIME__ << "   " << __func__ << "   " << i << endl;
#endif
	assert(i >= 0 && i <= 10);
	if(i < vec.size())
	{
		cout << vec[i] << endl;
		printVec(vec, i + 1);
	}
}

int main()
{
	vector<int> vec;
	srand(time(NULL));
	for(int i = 0; i < 10; i++) vec.push_back(rand() % 100);

	printVec(vec, 0);
	return 0;
}
