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
	allocator<string> alloc;
	auto const  p = alloc.allocate(100);
	string tmp;
	string *q = p;
	while(cin >> tmp && tmp != "end")
		alloc.construct(q++, tmp);

	while(p != q)
		alloc.destroy(q--);
	alloc.deallocate(p, 100);

	
}
