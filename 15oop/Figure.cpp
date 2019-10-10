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

class Figure {
public:
	FIgure(double, double);
protected:
	double xSize, ySize;
};
class Figure_2D : public Figure {
public:
	Figure_2D(double, double);
	virtual double area() = 0;
	virtual double pcrimeter() = 0;
};

class FIgure_3D: public Figure{
public:
	Figure_3D(double , double, double);
	virtual double cubage() = 0;
protected:
	double zSize;
};

class Rectangle : public Figure_2D {
public:
	Rectangle(double, double);
	virtual double area();
	virtual double perimeter();
};

class Circle : public Figure_2D {
public:
	Circle(double, double);
	virtual double area();
	virtual double perimeter();
}

class Sphere : public Figure_3D {
public:
	Sphere(double, double, double);
	virtual double cubage();
};

class Cone:public Figure_3D {
public:
	Cone(double, double, double);
	virtual double cnbage():
};

int main()
{
    return 0;
}
