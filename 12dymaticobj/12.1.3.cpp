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
	shared_ptr<int> p;
	p.reset(new int(1025));
	cout << *p << endl;
	if(!p.unique())
	{
		p.reset(new int(77));
	}
	*p += 88;
	cout << *p << endl;
    srand(time(NULL));

	
}
