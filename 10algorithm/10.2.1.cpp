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

using namespace std;


int main()
{
    srand(time(NULL));
	using vi = vector<const char *>;

	vi ii;
	int i = 0;
	while(i < 10)
	{
		ii.push_back("aaa");
		// ii.insert(ii.begin(), rand() % 100);
		i++;
	}
	//int val = accumulate(ii.begin(), ii.end(), 0);
	//cout << val << endl;



	// 10.2.1

	vi oo;
	i = 0;
	while(i<10)
	{
		oo.push_back("aaa");
		// oo.push_back(rand() % 100);
		i++;
	}

	cout << equal(ii.cbegin(), ii.cend(), oo.begin()) << endl;



	vector<double> tt;
	i = 0;
	while(i < 10 && ++i) tt.push_back(rand() % 100);
	double v = accumulate(tt.cbegin(), tt.cend(), 0.0);
	cout << v << endl;


	char  *p[] = {"aaa", "bbb"};
	char *q[] = {"aaa", "bbb"};
	cout << equal(begin(p), end(p), q) << endl;
	fill(tt.begin(), tt.end(), 0);
	

	vector<int> vec;

	fill_n(vec.begin(), 0, 0);

	vector<int> vec1;
	auto it = back_inserter(vec1);
	*it = 42;

	fill_n(back_inserter(vec1), 10, 0);
	
	
	vector<int> vvv;
	vvv.reserve(10);
	//fill_n(vvv.begin(), 100, 0);
	cout << vvv.size() << endl;
	fill_n(back_inserter(vvv), 10, 100);


}


