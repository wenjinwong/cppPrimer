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
#include<functional>
using namespace std;

/*
template<typename F, typename T1, typename T2>
void flip1(F f, T1, t1, T2 t2)
{
	f(t2, t1);
}

void f(int v1, int &v2)
{
	cout << v1 << " " << ++v2 << endl;
}
*/
template<typename T> typename remove_reference<T>::type&& move(T&& t)
{
	return static_cast<typename remove_reference<T>::type&&> (t);
}


int main() 
{
	string s1("hi"), s2;
	s2 = std::move(string("bye!"));
	s2 = std::move(s1);

}
