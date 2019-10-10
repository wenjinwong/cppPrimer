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

class Test {
public:
	Test(int a) 
	{
		val = a;
	}

	Test& operator=(const Test& rhs)
	{
		val = rhs.val;
	}
private:
	int val = 0;
};

int main(int argc, char* argv[])
{
    srand(time(NULL));
	Test t(100);
	Test tt = t;
	return 0;
}
