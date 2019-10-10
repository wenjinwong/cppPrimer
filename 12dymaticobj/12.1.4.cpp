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


class connection
{
	public:
		string *ss = new string("and you know that");
		vector<int> *vv;
		connection()
		{
			cout << "connection() " << endl;
			vv = new vector<int>{1,3,4,5,6,7};
		}
		~connection()
		{
			cout << "!deconnection() " << endl;
			delete vv;
			delete ss;
			vv = nullptr;
			ss = nullptr;
		}
		friend void end_connection(connection *p);

};
void end_connection(connection *p)
{
	cout << "connect is closed" << endl;
	if(p->vv) delete p->vv;
	if(p->ss) delete p->ss;
}
int main(int argc, char* argv[])
{
    srand(time(NULL));
	connection cc;
	//shared_ptr<connection> p(&cc, end_connection);
	shared_ptr<connection> pp(&cc, [] (connection *p) { cout << "end " << endl; });

}
