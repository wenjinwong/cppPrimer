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
	
	shared_ptr<int> sp(new int(88));
	weak_ptr<int> w(sp);

	weak_ptr<int> wp = w;
	w.reset();
	cout << w.use_count() << endl;
	cout << w.expired() << endl;
	w.lock();

	if(shared_ptr<int> np = wp.lock())
		cout << *np << endl;

	cout << wp.use_count() << endl;

	



}
