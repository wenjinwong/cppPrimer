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

struct X {
	X() { cout << " X() " << endl;}
	/*
	   X (const X&) { 
		cout << "X(const X&)" << endl;
	}
	*/
	X& operator=(const X& rhs)
	{
		cout << " X& = RHS" << endl;
	}
	
	~X() {
		cout << "~X() " << endl;
	}
};

int main(int argc, char* argv[])
{
    srand(time(NULL));
	cout << " x xx" <<endl;
	X xx;
	cout << "x tt = xx " << endl;
	X tt = xx;
	cout << "x cc(tt) " << endl;
	//X cc(tt);
	
	
	cout << "container" << endl;
	vector<X> vec;
	vec.push_back(X());

	cout << "delete x" << endl;
	X *xxx = new X();
	delete xxx;


}
