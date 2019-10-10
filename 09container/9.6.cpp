#include<iostream>
#include<cctype>
#include<string>
#include<vector>
#include<list>
#include<deque>
#include<fstream>
#include<cstdlib>
#include<ctime>
#include<stack>

#define e(a,b,c) (double(a) c double(b))

using namespace std;

double com(char a, char b, char f)
{
	switch(f)
	{
		case '+':
			return e(a, b, +);
		case '-':
			return e(a, b, -);
		case '*':
			return e(a, b, *);
		case '/':
			return e(a, b, /);
		default:
			cout << "pass" <<endl;
	}
}

double f(string exp)
{
	stack<char> s;
	double ret = 0;
	for(auto c : exp)
	{
		// ( push
				string emp;
				char a;
				double val;
		switch(c)
		{
			case '(':
				s.push(c);
				break;
			case ')':
				// get () and push
				a = s.top();
				s.pop();
				while(a != '(')
				{
					emp += s.top();
					s.pop();
				}
				val = f(emp);
				s.push(val);
				break;
			default:
				;
		}
	}			
	return s.top();
}

int main()
{
    srand(time(NULL));
	stack<int> intStack;

	for(size_t ix = 0; ix != 10; ++ix)
		intStack.push(ix);
	while(!intStack.empty())
	{
		int value = intStack.top();
		intStack.pop();
		cout << value << endl;
	}


	string e = "(2+7)";
	stack<char> sss;
	for(auto c : e)
	{
		if( c == '(')
			sss.push(c);
		else if(c == ')')
		{
			char c = sss.top();
			sss.pop();
			char b = sss.top();
			sss.pop();
			char a = sss.top();
			sss.pop();
			sss.pop();
			if(b == '+')
			{
				double val = int(a) + int(c); sss.push(val);
			}
			else if(b == '-')
			{double val = int(a) - int(c); sss.push(val);
			}
				
		}
		else
			sss.push(c);
	}
	cout << int(sss.top()) << endl;
}
