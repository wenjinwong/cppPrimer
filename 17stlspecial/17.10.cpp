#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<functional>
#include<bitset>
#include<tuple>
using namespace std;


class ans {
	public:
		unsigned set = 0;
		ans(char a[])
		{
			set = 0;
			int i = 0;
			for(i; i < 2;)
			{
				char c = a[i];
				c >> i;
				
				set |= c;
				cout << c << "  " << set << endl;
				i++;
			}
		}
};

int main()
{
	ans aaa("10");
	cout << aaa.set << endl;
	cout << " over" << endl;
	bitset<32> b1(1);
	bitset<32> b2(2);
	bitset<32> bb3(3);
	bitset<32> bb5(5);
	bitset<32> bb8(8);

	bb8.reset();
	bb8.set();
	bb8.set(0);
	cout << bb8 << endl;

	bitset<32> def;

	cout << def << "  " << def.set() << endl;
    

	//
}
