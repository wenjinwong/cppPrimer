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
#include<functional>
using namespace std;

template<class T>
class sp{
private:
	T p;
public:
	sp(T obj) : p(obj) {cout<< "constructor" << endl;}
	~sp() { delete p; cout << "deconstructor" <<endl;}
};


int main()
{
	vector<int> vec;
	sp<vector<int>* > s(&vec);
    return 0;
}
