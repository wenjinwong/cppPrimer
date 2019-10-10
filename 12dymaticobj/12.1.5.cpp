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
using namespace std;

unique_ptr<int> clone(int p)
{
	return unique_ptr<int>(new int(p) );
}

class connection{};

void dis_connect(connection* c)
{
	cout << "dis connected " << endl;
}

void end_connection(connection* c)
{
	dis_connect(c);
}

int main(int argc, char* argv[])
{
    srand(time(NULL));
/*
	unique_ptr<double> p1;
	unique_ptr<int> p2(new int(42));
	unique_ptr<string> p3(new string("streasr"));
	unique_ptr<string> p4;
	unique_ptr<int> pp;
	pp = nullptr;
	int ii = 9, *iip = &ii;
	pp.release();
	pp.reset(iip);
*/

	unique_ptr<string> p5(new string("hello"));
	unique_ptr<string> p6(p5.release());

	unique_ptr<string> p7;
	p7 = p6;

	unique_ptr<int> iii = clone(88);
	cout << *iii << endl;
	connection c;

	unique_ptr<connection, decltype(end_connection)*> pppp(&c,
			end_connection);	

}
