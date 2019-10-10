#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;

struct person{
	private:
	string name;
	string addr;

	public:
	inline const string& Name() const { return name; };
	inline const string& Addr() const { return addr; };
	person() = default;	
	person(string n, string addr) : name(n), addr(addr) {}

	person& combine(const person& rhs)
	{
		name = name + "  " + rhs.name;
		addr = addr + "  " + rhs.Addr();
		return *this;
	}

	friend ostream& print(ostream& os, const person& rhs);
	friend istream& read(istream& is, person& rhs);
};

ostream& print(ostream& os, const person& rhs)
{
	os << rhs.Name() << "  " << rhs.Addr() << endl;
	return os;
}

istream& read(istream& is, person& rhs)
{
	is >> rhs.name >> rhs.addr;
	return is;
}

person add(const person& lhs, const person& rhs)
{
	struct person sum = lhs;
	sum.combine(rhs);
	return sum;
}

int main()
{
	struct person p("wwj", "china");
	struct person p1("xx", "us");
	read(cin, p1);
	p.combine(p1);
	print(cout, p);
	struct person sum;
	sum = add(p, p1);
	print(cout, sum);
	return 0;
}
