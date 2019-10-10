#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

class test{
	public:
		test(istream& is = cin)
		{
			is >> i >> j;
		}
		test(int ii = 9)
		{
			i = ii;
			j = ii;
		}

		test(int lhs, int rhs) : j(lhs), i(j) {}
		int i;
		int j;
};


int main()
{
	test t(1, 2);
	cout << t.i;
	test tt;
	cout << tt.i;
}
