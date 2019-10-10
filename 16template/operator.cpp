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
#include<functional>
using namespace std;


class test{
	public:
		test(const string &ss) : s(&ss) {}
		const string *operator->() const { cout << "> "<<endl;return s; }
	private:
		const string* s;
};

int main()
{
	test t("hellp");
	cout << t->size();
    return 0;
}
