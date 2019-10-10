#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	unsigned int u = 100;
	int s = -100;
	cout << u + s;
	double uu = 234.324;
	double *d= &uu;
	void *p = &d;
	int *i = static_cast<int*>(p);
    cout << *i;
	const char *pc;
	const char cc[] = "test";
	pc = cc;
	char *pp = const_cast<char*>(pc);
	*pp = 'i';
	cout << pp;
	cout << endl;
	const char *ppp = "hello";
	const string sss = "hll";
	static_cast<string>(sss);
//	const_cast<string>(ppp);
	
	//4.36 
	int ii = 4;
	double dd = 5;
	cout << i *= static_cast<int>(d) << endl;
	


}
