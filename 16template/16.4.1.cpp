#include<iostream>
#include<initializer_list>
using namespace std;

class test{
	public:
		int val = 8;
};

template<typename T, class...Args>
void print(T t, Args...args)
{
	cout << t << endl;
	print( args...);
}

template<class T>
void print(T t)
{
	cout << t << endl;
}


int main()
{
	test t;
	print(43,"dfa", 3424.34);
	print(34,32432,434,324,2343,44);
    return 0;
}
