#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<stdexcept>

using namespace std;

int main()
{
	int p1, p2;
	cin >> p1 >> p2;
	//cout << p1 / p2 << endl;

/*	try {
		if(p2 == 0) throw runtime_error("/0");
		cout << p1 / p2;
	} 
	/*catch(runtime_error err) {
		cout << err.what() << endl;
	}*/
	if(p2 == 0)
	{
		throw runtime_error("/");
	}


}
