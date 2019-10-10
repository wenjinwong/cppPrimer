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

template<typename Pointer, typename Del>
class unique_p{
public:
	unique_p(int *ip, Del d) : del(d), p(ip) 
	{ cout << "unique ptr is constructing" << endl; }
	~unique_p() { (*del)(p); delete del;}
private:
	Pointer* p;
	Del     del;
};

template<class P>
class Delete {
public:
	void operator()(P *p)
	{
		delete p;
		cout << "pointer is deleted."<< endl;
	}
};

int main()
{
	Delete<int> dd;
	int* ip = new int(99999);
	unique_p<int, decltype(dd)*> up(ip, &dd);
    
	return 0;
}
