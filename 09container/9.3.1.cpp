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
	string ss;
	deque<string> ds;
	int some_val = 3;
	
	while(getline(cin, ss) && ss != "end")
	{
		ds.push_back(ss);
	}
	
	deque<string>::iterator id = ds.begin();
	for( ; id != ds.end(); id++)
	{
		cout << *id << endl;
	}

	//

	list<int> li{1,2,3,4,5,6,7,8,9};
	deque<int> d1, d2;
	for( auto c : li)
	{
		c % 2 == 0 ? d2.push_back(c) : d1.push_back(c);
	}
	
	vector<int> vec;
	int ii;
	while(cin >> ii)
		vec.insert(vec.begin(), ii);
	for(auto c : vec)
		cout << c << endl;
	vector<int> iv{1,2,3,4,5,6,7,8,9};

	vector<int>::iterator iter = iv.begin();
	int org_size = iv.size(), new_ele = 0;
	while(iter != (iv.begin() + org_size/2 + new_ele))
	{
		if(*iter == some_val)
		{
			iter = iv.insert(iter, 2*some_val);
			new_ele ++;
			iter++;
			iter++;
		}
		else
			iter++;
	}


}
