#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

class Sta{
public:
	static int cnt;
	static int cntf() { cout << cnt; cnt++; return cnt;
	}
	static int set() {
		return 8;
	}
};

int Sta::cnt = set();
int main()
{
	Sta s;
	Sta::cntf();
}
