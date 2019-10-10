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

Sales_dat::operator-=(const Sales_data& rhs)
{
	if(isbn() != rhs.isbn())
		throe isbn_mismatch("wrong isbns", isbn() , rhs.isbn());
	units_sold -= rhs.units_sold;
	revenue -= rhs.revenue;
	return *this;
}


using namespace std;

int main()
{
	//while(cin>> item1)
    return 0;
}

