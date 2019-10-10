#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<utility>
using namespace std;

void g(int&&i, int& j)
{
	cout << i << " " << j << endl;
}

void f(int v1, int& v2)
{
	cout << v1 << " " << ++v2 << endl;
}

template<typename F, typename T1, typename T2>
void flip1(F f, T1 t1, T2 t2)
{
	f(t2, t1);
}

template<typename F, typename T1, typename T2>
void flip2(F f, T1 &&t1, T2 &&t2)
{
	f(t2, t1);
}

/*
template<typename Type> itermediary(Type &&arg)
{
	finalFcn(std::forward<Type>(arg));
}
*/

template<typename F, typename T1, typename T2>
void flip(F f, T1 &&t1, T2 &&t2)
{
	f(std::forward<T2>(t2), std::forward<T1>(t1));
}

int main()
{
	void (*fp1) (int v1, int &v2) = f;
	int i = 2, j = i + 1;
	flip1<decltype(f), int , int>(fp1, 2, 3); 
	//flip2<decltype(f)>(fp1, i, j); 
	cout << i << j << endl;
	void (*gp) (int &&i, int &j) = g;
	//flip2<decltype(g)>(gp, i, 42); 
	//flip2<decltype(g)>(gp, i, 42); 

}
