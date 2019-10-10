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
#include<set>
#include<map>
#include<utility>
#include<unordered_map>
#include<unordered_set>
#include<memory>
using namespace std;

int main(int argc, char* argv[])
{
    srand(time(NULL));

	typedef int arrt[42];

	int *p = new arrt;

	int *pi1 = new int[10]{1,2,3,4,5,6,7,8,9,0};
//	auto *pi2 = new int[10]();
//	char * cp = new char[0];
//	cout << *cp << endl;
//	delete p;
	//int *u = new int(88);
	//delete u;
	//unique_ptr<int[]> up(new int[10]);
	//up.release();

	unique_ptr<int[]> uu(pi1);
	for(size_t i = 0; i != 10; ++i)
		cout << uu[i] << endl;

	shared_ptr<int> sp(new int[10], [](int *p) { delete [] p;});
	for(size_t i = 0; i != 10; ++i)
		*(sp.get() + i) = i;
	
	sp.reset();


}
