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

using namespace std;




int main()
{
	/*
	plus<int> intAdd;
	int sum = intAdd(10, 20);
    cout << sum << endl;
	negate<int> intNegate;
	cout << intNegate(10) << endl;
	vector<string> sv{"aa" ,"saf", "a", "ewr32", "ad", "w32"};
	sort(sv.begin(), sv.end(), greater<string>());
	for(auto c : sv)
		cout << c << endl;

	vector<string*> nt;
	string s1 = "s1";
	string s2 = "s2s";
	string s3 = "s333";
	string s4 = "s1";
	nt.push_back(&s3);
	nt.push_back(&s1);
	nt.push_back(&s2);
	nt.push_back(&s4);
	sort(nt.begin(), nt.end(), [](string* a, string* b) {return a < b;});
	sort(nt.begin(), nt.end(), less<string*>());
	for(auto c : nt)
		cout << *c;
		*/

	vector<int> vec;
	srand(time(NULL));

	for(int i = 0; i < 100; i++)
	{
		vec.push_back(rand() % 10000);
	}

	cout << " count : " << endl;
	cout << count_if(vec.begin(), vec.end(), bind2nd(greater<int>(), 99));
	cout << "end" << endl;
	find_if(vec.begin(), vec.end(), bind2nd(not_equal_to<int>(),100));
	transform(vec.begin(), vec.end(), vec.begin(), bind2nd(multiplies<int>(), 2));
	for(auto c : vec)
		cout << c << endl;

	return 0;
}
