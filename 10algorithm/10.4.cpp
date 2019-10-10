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
#include<iterator>

using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));
	//istream_iterator<int> in(cin), eof;
	//cout << accumulate(in, eof, 0) << endl;
	

	ifstream in(argv[1]);
	istream_iterator<string> str_it(in), eof;

/*	vector<string> vec;
	while(str_it != eof)
	{
		vec.push_back(*str_it++);	
	}
*/
	vector<string> vec(str_it, eof);

	for(auto c : vec)
		cout << c << endl;

	ostream_iterator<string> out_iter(cout, "ggggg  ");
	for(auto c : vec)
		*out_iter++ = c;
	cout << endl;

	// 10.29

	ifstream inn(argv[2]);
	istream_iterator<int> inn_iter(inn), eo;
	vector<int > veci(inn_iter, eo);

	sort(veci.begin(), veci.end());
	ostream_iterator<int> outer(cout, "    out    ");
	
	// for(auto c : veci)
	//	outer = c;


	unique_copy(veci.begin(), veci.end(), outer);

	//10.30
	
	vector<int> rev{1,2,3,4,5,6,7,8};
	auto ite = rev.crbegin();
	while(ite != rev.crend())
	{
		ite++;
		cout << *ite << endl;
	}

	string sss = "aa, bb , ccCC";
	
	auto iitt = find(sss.rbegin(), sss.rend(), ',');
	cout << string(sss.rbegin(), iitt) << endl;
	cout << string(iitt.base(), sss.end()) << endl;

}
