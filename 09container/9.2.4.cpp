#include<iostream>
#include<array>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
using namespace std;

int main()
{
	vector<int> vec1;
	vector<int> vec2(10);
	vector<int> vec3(10, 0);
	vector<int> vec4 = { 1, 2, 3, 4, 5, 6, 7, 8};
	vector<int> vec5{1, 2, 3};
	int a[3] = {1, 2, 3};
	array<int, 3> aa{2, 3, 4};

	vector<int> vec6(vec4);
	vector<int> vec7(vec3.cbegin(), vec3.cend());
	vec3 = vec2;
	list<int> li{1,3};
	swap(vec1, vec2);

	vec4.assign(vec5.crend(), vec5.crend());
	vector<double> vd(li.begin(), li.end());
	vector<double> vi(li.end(), li.begin());
	
	list<char *> lc{"a", "bc"};
	list<string> lss;
	lss.assign(lc.begin(), lc.end());

}
