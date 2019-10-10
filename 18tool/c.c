#include<stdio.h>
int max(int i, int t)
{
	printf("int");
	return i;
}

double max(double i , double b)
{
	printf("max");
	return i;
}

int main()
{
	int i = 3;
	int y = 5;
	max(i, y);
	double b = 8.3444, g = 324.324;
	max(b, g);
}
