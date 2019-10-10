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
	for(int i = 0; i < 20; ++i)
	{
		vec1.push_back(rand() % 10);
	}

	vector<int> vec2;
	remove_copy_if(vec1.begin(), vec1.end(),
			back_inserter(vec2), [](int i){return i % 2;});

	for(auto c : vec2) 
	{
		cout << c << endl;
	}




}
