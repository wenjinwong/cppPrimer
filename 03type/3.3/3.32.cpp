#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int a[10] = {};
int main()
{
	int a1[10];
	for( auto i: a) cout << i << " ";
	cout << endl;
	for(auto i : a1) cout << i << " ";
	cout << endl;
	int i = 10;
	int t[i] = {0, 1, 2, 3, 4, 5, 6, 7, 8, 9};
	vector<int> v;
	v.push_back(10u);
	vector<int> v1(v);
}
