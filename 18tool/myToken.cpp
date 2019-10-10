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
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;


class Token {
public:
	Token() : tok(INT), ival{0} {}
	Token(const Token& t) : tok(t.tok) {}
	Token &operator=(const Token&);
	Token &operator=(char);
	Token &operator=(int);
	Token &operator=(double);
private:
	emnu(INT, CHAR, DBL} tok;
	union{
	char cval;
	int ival;
	double dval;
	};
	void copyUnion(const Token&);
	};
int main()
{
    return 0;
}
