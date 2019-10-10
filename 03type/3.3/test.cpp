#include<vector>
#include<iostream>
#include<cctype>
constexpr int f()
{
	int a = 2;
	return a;
}
int f1()
{
	return 2;
}
using namespace std;
int main()
{
	constexpr int i = 2;
	int a[i] = { 1, 3};
	char aa[6] = "Dniel";
	int a2[f()] = {1, 3};
	int a3[f1()] = {1, 3};
	cout << endl << a2[1] <<endl << a3[0] << endl;
	int ia[] = {0, 1, 2,};
	auto ia2(ia);
	cout << *ia2;
	decltype(ia) ia3 = {1, 3, 3,};
	const vector<int> cv {10, 1};
}
