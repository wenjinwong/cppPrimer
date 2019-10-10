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


class Base {
public:
	void pub_mem() {};
protected:
	int prot_mem;
private:
	char priv_mem;
};

struct Pub_Derv : public Base {
	int f() { return prot_mem; }
	//char g() { return priv_mem; }
};

struct Priv_Derv : private Base {
	int f1() const { return prot_mem; }
};

int main()
{
	Pub_Derv d1;
	d1.pub_mem();
	Priv_Derv d2;
	d2.pub_mem();
    return 0;
}
