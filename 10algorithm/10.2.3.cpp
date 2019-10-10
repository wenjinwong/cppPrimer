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
#include<sstream>
using namespace std;



int main(int argc, char* argv[])
{
    srand(time(NULL));
	ifstream in(argv[1]);
	int val;
	string line;
	vector<int> vec;
	while(getline(in, line))
	{
		stringstream ll(line);
		ll >> val;
		vec.push_back(val);
	}
	
	sort(vec.begin(), vec.end());
	auto it = unique(vec.begin(), vec.end());
	vec.erase(it, vec.end());

	ofstream out(argv[1], ios::app);
	for(auto c : vec)
	{
		out << c << endl;
	}
	out.close();
	in.close();

	cout << " end main" << endl;
}
