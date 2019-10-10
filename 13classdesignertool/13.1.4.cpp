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


class numbered{
private:
	static int seq;

public:
	numbered() { mysn = seq++; 
	cout << mysn << endl;
	}
	int mysn;
};

int numbered::seq = 0;

void f(numbered s)
{
	cout << s.mysn<< endl;
}
void f(numbered& s, int a)
{
	cout << s.mysn << endl;
}
int main(int argc, char* argv[])
{
    srand(time(NULL));
	numbered a, b = a, c = b;
	f(a);f(b);f(c);
	f(a, 1); f(b, 2); f(c,5);
	return 0;
}
