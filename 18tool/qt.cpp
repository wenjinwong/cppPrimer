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
#include<functional>
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;

class TextQuery{
public:
	class QueryResult;
	//
};


class TextQuery::QueryResult {
	friend ostream& print(std::ostream&, const QueryResult&);
public:
	QueryResult(std::string, std::shared_ptr<std::set<line_no>>, std::shared_ptr<std::vector<std::string>>);
	//
};

c

int main()
{
    return 0;
}
