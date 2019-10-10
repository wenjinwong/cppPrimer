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
	
	list<int> l1 = {1,2,3,4};
	list<int> l2, l3;
	copy(l1.cbegin(), l1.cend(), front_inserter(l2));
	copy(l1.begin(), l1.end(), inserter(l3, l3.begin()));

	for(auto c : l2)
		cout << c << endl;
	
	for(auto c : l3)
		cout << c << endl;

	vector<int> v1;
	list<int> lll;
	for(int i = 0; i < 20 ; i++)
	{
		v1.push_back(rand() %10);
	}
	sort(v1.begin(), v1.end());
	unique_copy(v1.begin(), v1.end(), back_inserter(lll));
cout << "unique" << endl;
	for(auto cc : lll)
		cout << cc << endl;





}
