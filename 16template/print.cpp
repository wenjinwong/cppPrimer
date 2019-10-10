#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;


template<typename T>
ostream& print(ostream& os, const T &t)
{
	return os << t;
}

template<typename T, typename...Args>
ostream& print(ostream& os, const T& t, const Args&... rest)
{
	os << t << ", ";
	return print(os, rest...);
}

int main()
{
	print(cout, 34, 53, 3);

    return 0;
}
