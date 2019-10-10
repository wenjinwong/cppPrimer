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


class Employee 
{
public:
	Employee(const string& n)
	{
		name = n;
		id = cnt++;
		cout << "construct " << name << "   " << id << endl;
	}
	Employee(const Employee& t)
	{
		cout << " copying:" << endl;
		name = t.name;
		id = t.id;
	}
	string name;
	int id;
	static int cnt;
};

int Employee::cnt = 999;

int main(int argc, char* argv[])
{
    srand(time(NULL));
	Employee em("xiaowang");
	Employee em1("xiaowang");
	Employee em12("xiaowang");
	Employee em2("xiaowang");
	Employee em3(em1);
	cout << em3.id << endl;

}
