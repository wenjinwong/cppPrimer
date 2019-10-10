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

class String{
public:
	string sss;
	ostream& operator<<(ostream& os);
};

ostream& operator<<(ostream& os, String s){
	os << this->sss;
	return os;
}


int main()
{
	String ss;
	ss.sss = "sssssssss";
	ss << cout;

    return 0;
}

