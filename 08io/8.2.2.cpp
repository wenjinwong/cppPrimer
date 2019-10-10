#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<fstream>
using namespace std;

class book
{
	public:
		book(string name, unsigned cnt, double revenue) : name(name),
		cnt(cnt), revenue(revenue) {}
		ostream& out(ostream& os)
		{
			os << name << " " << cnt << " " << revenue << "\n";
			return os;
		}
	private:
		string name;
		unsigned cnt;
		double revenue;
};

int main(int argc, char* argv[])
{
	ofstream os;
	os.open(argv[1], ofstream::app);
	book b1("b1", 10, 100);
	book b2("b2", 23, 345);
	b1.out(os);
	b2.out(os);
	cout << "saved" << endl;

}
