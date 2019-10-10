#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<forward_list>
using namespace std;

typedef forward_list<string> def;
void f(def d, string s1, string s2)
{
	def::iterator it, it1;
	it = d.begin();
	it1 = d.before_begin();
	while(it != d.end())
	{
		if(*it == s1)
		{
			d.insert_after(it, s2);
			return;
		}
		it1 = it;
		it++;
	}
	d.insert_after(it1, s2);
}
int main()
{

	forward_list<int> ff{1,2,3,4,5,6,7,8,9,};
	forward_list<int>::iterator before,it = ff.begin();
	before = ff.before_begin();
	while(it != ff.end())
	{
		it = (*it & 1) ?  ff.erase_after(before) : (before = it, ++it);
	}
	for(auto c : ff)
		cout << c << endl;
	

}
