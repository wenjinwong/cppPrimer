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

class out_of_stock: public std::runtime_error {
public:
	explicit out_of_stock(const string& s) : std::runtime_error(s) {}
};

class isbn_mismatch: public std::logic_error {
public:
	explicit isbn_mismatch(const std::string &s) :
		std::logic_error(s) {}
	isbn_mismatch(string &s, string lhs, string rhs) :
		logic_error(s), left(lhs), right(rhs) {}
	const string left, right;
};

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
	if(isbn() != rhs.isbn() )
		throw isbn_mismatch("wrong isbns", isbn(), rhs.isbn());
	units_sold += rhs.units_sold;
	revenue += rhs.revenue;
	return *this;
}



int main()
{
	Sales_data item1, item2, sum;
	while(cin >> item1 >> item2)
	{
		try {
			sum = item1 + item2;
		}
		catch(const isbn_mismatch &e)
		{
			cerr << e.what() << " : left isbn(" << e.left << ") right isbn(" < e.right << ")" << endl;
		}
	}
	
    return 0;
}

