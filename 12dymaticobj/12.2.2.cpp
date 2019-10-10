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

	int n = 10;
	allocator<string> alloc;
	auto q = alloc.allocate(n);

	alloc.construct(q++, 10, 'c');
	alloc.construct(q++, "hi");
	cout << *(--q) << endl;
	alloc.destroy(q);
	alloc.destroy(--q);

	alloc.deallocate(q, n);

	vector<int> vi = {1,2,3,4,5,6,7,8,9,10};
	allocator<int> all;
	auto p = all.allocate(vi.size() * 2);
	auto q1 = uninitialized_copy(vi.begin(), vi.end(), p);
	uninitialized_fill_n(q1, vi.size(), 43);


}
