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

class Screen{
	public:
		static const std::string Screen::*data()
		{
			return &Screen::contents; }
		Screen(const string &ss) : contents(ss) {}
	private:
		string contents;
		unsigned pos;
};



int main()
{
	//const string Screen::*pdata;
//	pdata = &Screen::contents;
	auto pdata = Screen::data();
	Screen sc("asdfasfda");
	
	char (Screen::*pmf2)(Screen::pos, Screen::pos) const;
	pmf2 = &Screen::get;

	double Sales::*data() const;
	data = &Sales::avg_price;
	(sales_data::*data)();
	typedef double (sales_data::*pt) () const;
	pt pFUnc = &SALES_DATA::AVG_PRICE;
	SALES_DATA SD;
	(SD.*PFUNC)();
	auto s = sc.*pdata;
	cout << s<< endl;
	//Screen myScreen, *pScreen = &myScreen;
	//auto s = myScreen.*pdata;
	//s = pScreen->*pdata;


    return 0;
}
