#include<iostream>
using namespace std;
class ans 
{
	public:
		unsigned long status = 0;
		ans(const string &s)
		{
			status = 0;
			for(int i = 0; i< s.size(); i ++)
			{
				unsigned long  c = s[s.size() -1 - i] - '0';
				//cout << c << "  ";
				c = c << i;
				//cout << c << endl;
				status = status |  c;
				cout << status << "  " << c << endl;
			}
		}
};
				

int main()
{
	cout << (1 << 5) << endl;
	ans a("111110010");
}

