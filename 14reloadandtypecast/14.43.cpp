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

bool dividedByAll(vector<int> &ivec, int dividend)
{
	return count_if(ivec.begin(), ivec.end(), bind2nd(modulus<int>, dividend)) == 0;
}
int main()
{
	vector<int> vec{1,2,3,4,5};
	cout << dividedByAll(vec, 6);
    return 0;
}
