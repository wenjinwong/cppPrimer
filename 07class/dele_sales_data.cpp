#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

class Sales_data
{
private:
	string bookNo;
	unsigned cnt;
	double revenue;

public:
	Sales_data() { cout << " constructor " << endl; }
	Sales_data(string s) : Sales_data() { bookNo = s;}
	Sales_data(string s, unsigned c, double revenue = 0) :
		Sales_data() { bookNo = s; cnt = c;}
};




int main()
{
	Sales_data d;
	Sales_data dd("dd", 100, 10000);
}
