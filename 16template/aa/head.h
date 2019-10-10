#include<string>
using namespace std;
template<typename T>
class Blob{
	public:
		int val = 8;
		T name = "";
};

template<class T>
int compare(const T& lhs, const T& rhs)
{
	return lhs < rhs;
}
