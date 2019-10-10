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

/*
class numbered{
public:
	//friend void f(const numbered& s) { cout << s.mysn << endl; }
	numbered(int s)
	{
		mysn = s;
	}

private:
	int mysn;
};

*/


class numbered1{                                                           
public:
    friend void f(const numbered1& s);
    numbered1(int s)
    {
        mysn = s;
    }
	numbered1& operator=(const numbered1& nn)
	{
		mysn = nn.mysn + 2;
		return *this;
	}
	
	numbered1(const numbered1& nn)
	{
		mysn = nn.mysn + 1;
	}
	
    int mysn;
};
void f(const numbered1& s) { cout << s.mysn << endl; }

int main(int argc, char* argv[])
{
    srand(time(NULL));
	numbered1 a(88);
	f(a);

}
