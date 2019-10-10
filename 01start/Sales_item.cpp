#include"Sales_item.h"

Sales_item Sales_item::operator +(const Sales_item &item)
{
	if(ISBN == item.isbn())
	{
		NUM += item.num();
		SALESVOLUME += item.salesvolume();
	}
	return *this;
}

istream& operator>>(istream& is, const Sales_item& item)
{
	double tmp = 0;
	is >> item.ISBN >> NUM >> tmp;
	item.SALESVOLUME = NUM * tmp;
}

ostream operator<<(ostream& os, const Sales_item& item)
{
	os << ISBN << " " << NUM << " " << SALESVOLUME << " " << SALESVOLUME / NUM;
	return os;
}

Sales_item Sales_item::operator =(const Sales_itemi item)
{
	ISBN = item.ISBN;
	NUM = item.NUM;
	SALESVOLUME = item.SALESVOLUME;
	return *this;
}

Sales_item Sales_item::operator +=(const Sales_item)
{
	if(ISBN == item.isbn())
	{
		NUM += item.NUM;
		SALES_VOLUME += item.SALESVOLUME;
	}
	return *this;
}
