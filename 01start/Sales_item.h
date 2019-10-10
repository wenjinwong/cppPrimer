#ifndef __Sales_item_H
#define __Sales_item_H

#include<iostream>
#include<istream>
#include<ostream>
class Sales_item
{
public:
	Sales_item() = default;
	Sales_item operator +(const Sales_item&);
	friend istream& operator >>(istram&, const Sales_item);
	friend ostream& operator <<(ostream&, const Sales_item);
	Sales_item operator =(const Sales_item);
	Sales_item operator +=(const Sales_item);
	int num()
	{
		return NUM;
	}
	double salesvolume()
	{
		return salesvolume;
	}
	int isbn()
	{
		return ISBN;
	}
	int ISBN;
	int NUM;
	double SALESVOLUME = 0;
}

#endif
