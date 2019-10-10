#include<vector>
#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	vector<int> v2(10);
	for(auto c : v2)
		cout << c << endl;
	vector<string> v7{10, "hi"};
	for(auto c : v7)
		cout << c << endl;
}
