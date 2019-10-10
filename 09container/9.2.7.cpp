#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
using namespace std;

int main()
{
	vector<int> v1, v2;
	v1 = {1, 2, 3};
	v2 = { 1, 2, 2,};
	v2.insert(v2.begin(), v2.begin(), v2.end());
	cout << (v1 == v2) << endl;
	list<int> li{1,2,3};
	li.insert(li.begin(), li.begin(), li.end());
	cout << *li.begin() << endl;
	list<int>::iterator il = li.begin();
	vector<int>::iterator iv = v1.begin();
	while(iv != v1.end() && il != li.end() )
	{
		if(*il > *iv)
			cout << "il > iv" << endl;
		else if(*il < *iv)
			cout << "il < iv" << endl;
		else
			cout << " == " << endl;
		
		il++;
		iv++;
	}
}
