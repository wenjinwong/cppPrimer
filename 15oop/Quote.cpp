#include<iostream>
#include<string>
#include<vector>
#include<memory>
#include<set>
using namespace std;


class Quote{
public:
	Quote() { cout << "quote constructor " << endl; }
	Quote(const Quote&) = default;
	Quote(Quote&&) = default;
	Quote& operator=(const Quote&) = default;
	Quote& operator=(Quote&&) = default;
	Quote(const std::string &book, double sales_price) :
		bookNo(book), price(sales_price) { }
	std::string isbn() const { return bookNo; }

	virtual Quote* clone() const & { return new Quote(*this);}
	virtual Quote* clone() &&
	{return new Quote(std::move(*this));}
	virtual void debug() const { cout << bookNo <<" " << price << " ";}
	virtual double net_price(std::size_t n) const { cout << isbn() << " "; return n * price; }
	virtual ~Quote() { cout << "quote deconstructor " << endl;}

	static void statmem() { cout << "static function" << endl; }
private:
	std::string bookNo;
protected:
	double price = 0.0;
};


class Disc_quote: public Quote {
public:
	Disc_quote() = default;
	Disc_quote(const string& book, double price, size_t qty, double disc) : Quote(book, price), quantity(qty),
	discount(disc) {}
	double net_price(size_t ) const = 0;
protected:
	size_t quantity = 0;
	double discount = 0.0;
};

/*double Disc_quote::net_price(size_t n) const {
	return price * n * discount;
}
*/
class Bulk_quote : public Disc_quote{
public:
	Bulk_quote() = default;
	Bulk_quote(const Bulk_quote& b);
	Bulk_quote(Bulk_quote&& b);
	using Disc_quote::Disc_quote;
	//Bulk_quote(const string& book, double price, size_t qty, double disc) : Disc_quote(book, price, qty, disc){}
	double net_price(size_t n) const override;
	Bulk_quote* clone() const &{return new Bulk_quote(*this);}
	Bulk_quote* clone() && 
	{return new Bulk_quote(std::move(*this));}
};

Bulk_quote::Bulk_quote(const Bulk_quote& b) : Disc_quote(b)
{
	cout << "Bulk_quote copy constructor " << endl;
	quantity = b.quantity;
	discount = b.discount;
}

Bulk_quote::Bulk_quote(Bulk_quote&& b) :Disc_quote(std::move(b))
{
	cout << "Bulk_quote move construtor " << endl;
	quantity = b.quantity;
	discount = b.discount;
}

double Bulk_quote::net_price(size_t n)const {
	cout << isbn() << "  " << n << "  " ;
	return n >= quantity ? n * (1 - discount) * price : price * n * 1;
}


/*class Bulk_quote : public Quote {
public:
	Bulk_quote() = default;
	Bulk_quote(const string&, double, size_t, double);
	double net_price(size_t) const override;
	virtual void debug() const override{ Quote::debug();
		cout << " " << min_qty << " " << discount << endl; }
private:
	size_t min_qty = 0;
	double discount = 0.0;
};

Bulk_quote::Bulk_quote(const string& book, double p, size_t qty, double disc) : Quote(book, p), min_qty(qty),
	discount(disc) {}


double Bulk_quote::net_price(size_t n) const
{
	return n >= min_qty ? price * n * discount : price * n;
}
*/


class Under_quote : public Disc_quote {
public:
	Under_quote() = default;
	Under_quote(const string& book, double price, size_t upper, double disc) : Disc_quote(book, price, upper, disc) {}
	double net_price(size_t) const override;
};

double Under_quote::net_price(size_t n) const {
	return n <= quantity ?price * quantity * (1 - discount) + (n - quantity) * price : price * n;
}


double print_total(ostream& os, Quote& q, size_t n)
{
	double ret;
	ret = q.net_price(n);
	cout << "ISBN: " << q.isbn() << " number: " << n << " revenue: " << ret << endl;
	return ret;
}

/*

class Basket {
public:
	//void add_item(const shared_ptr<Quote> &sale)
	//{ items.insert(sale); }
	void add_item(const Quote& sale)
	{ item.insert(std::shared_ptr<Quote>(sale.clone())); }
	void add_item(Quote&& sale)
	{ items.insert(shared_ptr<Quote>(std::move(sale).clone()));}
	double total_receipt(ostream&) const ;
private:
	static bool compare(shared_ptr<Quote> &lhs,
			shared_ptr<Quote> &rhs)
	{ return lhs->isbn() < rhs->isbn(); }
	multiset<shared_ptr<Quote>, decltype(compare)*> items{compare};
};


double Basket::total_receipt(ostream& os) const 
{
	double sum = 0.0;
	for(auto iter = items.cbegin();
			iter != items.cend();
			iter = items.upper_bound(*iter)) {
		sum += print_total(os, **iter, items.count(*iter));
	}
	os << "Total Sale: " << sum << endl;
	return sum;
}
*/

class Basket {
public:
	void add_item(const shared_ptr<Quote> &sale) {
		items.insert(sale); }
	double total_receipt(ostream&) const;

private:
	static bool compare(const shared_ptr<Quote> &lhs, const shared_ptr<Quote> &rhs)
	{return lhs->isbn() < rhs->isbn();}
	multiset<shared_ptr<Quote>, decltype(compare)*>items{compare};
};

double Basket::total_receipt(ostream& os) const 
{
	double sum = 0.0;
	for(auto iter = items.begin(); iter != items.end();
			iter = items.upper_bound(*iter)) {
		sum += print_total(os, **iter, items.count(*iter));
	}
	os << " Total Sale: " << sum << endl;
	return sum;
}


int main(int argc, char **argv)
{
	Under_quote q2("q2", 10, 10, 0.6);
	Bulk_quote q1("q1", 10 ,5 , 0.5);
	q1.statmem();
	Quote qq = q2;
	vector<Quote> vv;
	vv.push_back(std::move(qq));
	//qq.show();
	Quote &qq2 = q2;
	//Bulk_quote &bulkr = qq2;
	//Bulk_quote& bulkref = &qq;
	print_total(cout, q1, 100);
	print_total(cout, q2, 10);
	Bulk_quote b3(q1);
	Bulk_quote b4(std::move(Bulk_quote("ff", 10, 5, 0.4)));
//	qq2.debug();
	vector<shared_ptr<Quote>> basket;
	basket.push_back(make_shared<Quote>("0-201-82470-1", 50));

	basket.push_back(make_shared<Bulk_quote>("0-201-82470-1", 50, 10, 0.5));
	cout << basket.back()->net_price(15) << endl;
	cout << (*basket.begin())->net_price(15) << endl;
	Quote qi("qi", 10);
	cout << qi.net_price(10) << endl;
	Basket ba;
	ba.add_item(make_shared<Quote>(q1));
}
