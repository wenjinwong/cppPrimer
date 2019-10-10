#include<iostream>

using namespace std;

#include "StrBlob.h"

int main(int argc, char **argv)
{
	StrBlob b1;
	{
		StrBlob b2 = { "a", "an", "the"};
		b1 = b2;
		b2.push_back("about");
		cout << "b2's size is: " << b2.size() << " " << b2.back() << endl;
		cout << "b2's head tail element is: " << b2.front() << " " 
			<< b2.back() << endl;
	}
	StrBlob b3 = b1;
	b3.push_back("next");
	cout << "b3's size is: " << b3.size() << endl;
	cout << "b3's head tail elements is: " << b3.front() << " " 
		<< b3.back() << endl;

	cout << "b1's element is: " << endl;
	for(auto it = b1.begin(); neq(it, b1.end()); it.incr())
		cout << it.deref() << endl;
	return 0;
}
