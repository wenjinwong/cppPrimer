#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

int main()
{
	int src[3] = {1, 2, 3};
	vector<int> v(begin(src), end(src));
	int i = 0;
	for(auto c : v)
	{
		src[i++] = c;
	}
}
