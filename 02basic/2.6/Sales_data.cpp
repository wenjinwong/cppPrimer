#include<iostream>
#include"Sales_data.h"
#include<string>

int main()
{
	struct Sales_data data1, data2;
	// read data1, data2
	double price = 0.0;
	std::cin >> data1.bookNo >> data1.units_sold >> price;
	data1.revenue = data1.units_sold * price;
	std::cin >> data2.bookNo >> data2.units_sold >> price;
	data2.revenue = data2.units_sold * price;
	//check their bookNo
	if(data1.bookNo == data2.bookNo)
	{
		unsigned total = data1.units_sold + data2.units_sold;
		double totalRevenue = data1.revenue + data2.revenue;
		std::cout << data1.bookNo << " " << total << " " << totalRevenue << " ";
		if(total != 0)
		{
			std::cout << totalRevenue / total << std::endl;
			return 0;//success
	//if eq, eval sum of thm
		}	
		else
		{
			std::cout << "(no sales)" << std::endl;
			return 0;
		}
	}
	return -1;//failure
}
