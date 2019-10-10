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
using namespace std;



int main()
{
	bitset<32> bitvec(1U);
	//char tt[6] = "10100";
	//bitset<5> b(tt, 5, 0, 1);
	cout << bitvec << endl;
    bitset<13> bitvec1(0xbeef);
	cout << bitvec1 << endl;
	bitset<20> bitvec2(0xbeef);
	bitset<128> bitvec3(0ULL);
	cout << bitvec3 << endl;
	
	bitset<32> bitvec4("1100");
	cout << bitvec4 << endl;
	string str("110101010100101010");
	bitset<32> bitvec5(str, 5, 4);
	
	bitset<64> bitvec7(32);
	bitset<32> bv(10101001);
	string bstr;
//	cin >> bstr;
//	bitset<8> bvE(bstr);
//	cout << bvE << endl;

	cout << bv.any() << " " << bv.all() << bv.none() << " " << bv.count() << " " << bv.size() << " " << bv.test(4)
		<< " " << bv.set(5, 1) << bv.reset(5) << bv.flip(3) << bv.flip() << bv[2] << " " << bv.to_ullong()
		<< endl;

	cout << bv.to_string('t','z');

	bitset<5555>
		bs("000101010101010101010101010101010100101010100101010010101111010101011010110100101010101010101010101111111111111111111111111111111111111111111111111111111111111111111111111101000000000000000000000000000000000000000000000000000000000000001111111111111111");
	string ss = "010";
	bitset<3> bn(ss, 0, 3, 'u','l');
	cout << bn << endl;
	cout << bs << endl;
//	cout << bs.to_ulong() << endl;
}
