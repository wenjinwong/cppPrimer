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

using namespace std;

class Sales_data {
private:
	string name;
	unsigned int cnt;
public:
	Sales_data& operator=(string n);
	friend ostream& operator<<(ostream& os, Sales_data& s);
	friend istream& operator>>(istream& is, Sales_data& s);
	friend bool operator==(const Sales_data&, const Sales_data &rhs);
	friend bool operator!=(const Sales_data& lhs, const Sales_data& rhs);
	Sales_data& operator+=(const Sales_data&);
	friend bool operator<(const Sales_data&, const Sales_data&);
//	Sales_data operator+( const Sales_data&);
	friend Sales_data operator+(const Sales_data&, const Sales_data&);
	char& operator[](size_t n);
	const char& operator[](size_t n) const ;
	
	Sales_data& operator--();
	Sales_data& operator++();
	Sales_data operator++(int);
	Sales_data operator--(int);
	const string& operator*() const
	{
		return name;
	}
	const string* operator->() const
	{
		return & this->operator*();
	}
};

Sales_data& Sales_data::operator--()
{
	cnt--;
	return *this;
}

Sales_data& Sales_data::operator++()
{
	cnt++;
	return *this;
}

Sales_data Sales_data::operator++(int)
{
	Sales_data ret = *this;
	++*this;
	return ret;
}

Sales_data Sales_data::operator--(int)
{
	Sales_data ret = *this;
	--*this;
	return ret;
}

char& Sales_data::operator[](size_t n)
{
	return name[n];
}

const char& Sales_data::operator[](size_t n) const
{
	return name[n];
}

Sales_data& Sales_data::operator=(string n)
{
	name = n;
	cnt = 0;
	return *this;
}

bool operator<(const Sales_data& lhs, const Sales_data& rhs)
{
	if(lhs.name == rhs.name && lhs.cnt < lhs.cnt)
		return true;
	return false;
}

Sales_data operator+(const Sales_data& lhs, const Sales_data& rhs)
{
	cout << "+" << endl;
	Sales_data ss = lhs;
	ss += rhs;
	return ss;
}

Sales_data& Sales_data::operator+=(const Sales_data& rhs)
{
	cout << "+=" << endl;
	if(name == rhs.name)
	{
		cnt += rhs.cnt;
	}
	return *this;
}

bool operator!=(const Sales_data& lhs, const Sales_data& rhs)
{
	return !(lhs == rhs);
}

bool operator==(const Sales_data &lhs, const Sales_data &rhs)
{
	return (lhs.name == rhs.name && lhs.cnt == rhs.cnt);
}

/*
Sales_data Sales_data::operator+(const Sales_data& rhs)
{
	Sales_data sum = *this;
	sum += rhs;
	return sum;
}
*/

ostream& operator<<(ostream& os, Sales_data& s)
{
	os << s.name << " " << s.cnt;
	return os;
}

istream& operator>>(istream& is, Sales_data& s)
{
	is >> s.name >> s.cnt;
	if(is)
		;
	else
		s = Sales_data();
	return is;
}

int main()
{
	Sales_data s1, s2;
	cin >> s1;
	s2 = "hhh";
	Sales_data ss = s1 + s2;
	cout << ss << endl;
	cout << (s1 == s2);
	cout << (s1 < s2);
	s1.operator++();

	cout << endl << s2[2] << endl;
	s1.operator--(8);
	const Sales_data ass(s1);
	cout << *s1 << endl;
	cout << s1->size() << endl;
	return 0;
}
