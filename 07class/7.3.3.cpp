#include<iostream>
#include<cctype>
#include<string>
#include<vector>
using namespace std;


class X;
class Y;

class X{
	int val;
	Y * py;
};

class Y{
	int val;
	X x;
};

int main()
{
	X x;
	Y y;

}
