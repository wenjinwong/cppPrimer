#include<vector>
#include<list>
#include<string>
#include<iostream>
#include<tuple>
using namespace std;

int main(int argc, char** argv)
{
	tuple<size_t, size_t, size_t> threeD;
	tuple<string, vector<double>,int, list<int>>
		someVal("constants", {3,14, 2.134}, 42, {0,1,2,3,4,5});
	tuple<size_t, size_t, size_t> threeD2{1,2,3};

	auto itme = make_tuple("099-34", 3, 20.00);
	auto book = get<0>(itme);
	typedef decltype(threeD2) trans;
	size_t sz = tuple_size<trans>::value;
	tuple_element<1, trans>::type cnt = get<1>(threeD2);

	tuple<size_t, size_t> origin(0, 0);
	tuple<size_t, size_t> twoD(1,2);
	auto b = (origin < twoD);

}
