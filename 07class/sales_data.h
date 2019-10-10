#include<iostream>
#include<cctype>
#include<string>
#include<vector>                                                                                                                                                                                                   
using namespace std;

struct sales_data
{
public:
    sales_data() = default; 
    sales_data(string &s) : bookNo(s) {}
    sales_data(const string &s, unsigned n, double p) : bookNo(s), units_sold(n), revenue(p*n) {}
    sales_data(istream& is);
    string isbn() const { return bookNo; }
    sales_data& combline(sales_data&);
    double avg_price() const;
    friend istream& read(istream& is, sales_data& data);
    friend ostream& print(ostream& os, sales_data& data);
    string bookNo;
private:
	
    unsigned units_sold = 0;
    double revenue = 0.0;

};

