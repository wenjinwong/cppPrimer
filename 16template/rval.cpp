#include<iostream>
#include<vector>
#include<string>

using namespace std;

int main()
{
	string A("abc");
	//string&& Rval = std::move(A);
	//string B(Rval);
	cout << A << endl;
	string C(std::forward<string>(A));
	cout << A << endl;
	cout << C << endl;
	return 0;
}
