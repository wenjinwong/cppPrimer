#include"sales_data.h"

ostream& print(ostream& os, sales_data& data)
{
	os << data.bookNo << "  " << data.units_sold << "  " << data.revenue;
	return os;
}

istream& read(istream& is, sales_data& data)
{
	is >> data.bookNo >> data.units_sold >> data.revenue;
	return is;
}

sales_data::sales_data(istream& is)
{
	read(cin, *this);
}

sales_data& sales_data::combline(sales_data& data)
{
	bookNo += data.bookNo;
	return *this;
}


int main()
{
	string sss = " jljl jkl";
	string ssss = " jljl jkl";
	sales_data s1 = sss;
	 s1 = ssss;
	 s1.combline(sss);
	print(cout, s1);

}
