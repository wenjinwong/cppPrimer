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
#include<initializer_list>

using namespace std;

int f() {
	cout << "f() " << endl;
	return 0;
}

class St{
	public:
	St(){cout << "st" << endl; }
	St(const St&) { cout << "copy construct" << endl;}
	St& operator=(const St&) { cout << " copy = " << endl;}
};

int main()
{
	int i = 42;
	int &r = i;
	int &&rr = i * 42;

	int &&rr3 = std::move(r);
	r = 3;
	r += 1;
	cout << rr3  << endl;
	
	int (*rf) () = f;
	int &&iii = f();
	vector<int> vi(100);
	int &r2 = vi[0];
	int &&r1 = f();
	int &r3 = r1;
	int &&r4 = vi[0]*f();
	
	vector<St> sv;
	for(int i = 0; i < 10; i++)
	{
		St sss;
		sv.push_back(sss);
	}
	St ss2;
	cout << "push" << endl;
	sv.push_back(std::move(ss2));
	cout << "over" << endl;
}
