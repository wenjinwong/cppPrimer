#include<utility>
#include<iostream>
#include<cctype>
#include<string>
using namespace std;

void f(int lhs, int &rhs)
{
	cout << lhs << ++rhs << endl;
}

void g(int &i, int &j)
{
	cout << i << " " << ++j << endl;
}

template<class F, class T1, class T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

int main()
{
	int i = 1;
	int j = 1;
	flip(g, i, j);
	cout << i << " " << j << endl;
}
