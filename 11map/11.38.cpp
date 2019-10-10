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
using namespace std;


size_t hasher(const string& word)
{
	return hash<string>()(word);
}

bool eq(const string& lhs, const string& rhs)
{
	return lhs.size() == rhs.size();
}

using mmm = unordered_multiset<string, decltype(hasher) *, 
	  decltype(eq) *>;


int main(int argc, char* argv[])
{
    srand(time(NULL));
	
	mmm word_counts(10, hasher, eq);
}
