#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

typedef struct Sales_data
{
	string ISBN;
	unsigned cnt;
	double revenue;
	Sales_data& combine(const Sales_data &rhs);
	inline string isbn() const { return this->ISBN; }
	Sales_data(string IS, unsigned cn, double rev) : ISBN(IS), cnt(cn),
	revenue(rev) {};
	Sales_data() = default;
}data;

Sales_data& Sales_data::combine(const Sales_data &rhs)
{
	this->cnt += rhs.cnt;
	this->revenue += rhs.revenue;
	return *this;
}



int main()
{
	data d1;
	d1.ISBN = "d1";
	d1.cnt = 10;
	d1.revenue = 100;
	data d2;
	d2.ISBN = "d2";
	d2.cnt = 20;
	d2.revenue = 50;
	d1.combine(d2);
	cout << d1.isbn() << "  " << d1.cnt << endl; //7.2
	d1.combine(d1);	
	
	cout << d1.cnt << endl;
	data curr;
	
}
