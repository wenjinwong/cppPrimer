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
using namespace std;

void process(shared_ptr<int> xx)
{
	cout << "process" << endl;
}

vector<int>* ff()
{
	return new vector<int>;
}

vector<int>* read(vector<int>* pvec)
{
	int tmp;
	while(cin >> tmp)
	{
		pvec->push_back(tmp);
	}

	return pvec;
}

void print(vector<int>* pvec)
{
	for(auto c : *pvec)
	{
		cout << c << endl;
	}

	delete pvec;
}


// 12.6

shared_ptr<vector<int> > ff1()
{
	return make_shared<vector<int> > ();
}


shared_ptr<vector<int> > read1(shared_ptr<vector<int> > pvec)
{
	int jj;
	while(cin >> jj)
	{
		pvec->push_back(jj);
	}
	return pvec;
}

void print1(shared_ptr<vector<int> > pvec)
{
	for(auto c : *pvec)
	{
		cout << c << endl;
	}
}



int main(int argc, char* argv[])
{
    srand(time(NULL));
	
	/*
	string *ps = new string;

	string *pss = new string(10, '9');
	cout << *pss << endl;
	int *pi1 = new int();
	auto p2 = new auto("hhhh");
	cout << *p2 <<endl;

	const string *pcs = new const string;
*/
/*
	int i, *pi1 = &i, *pi2 = nullptr;
	double *pd = new double(33), *pd2 = pd;
	//delete i;
	//delete pi1;
	//delete pd;
	//delete pd2;
	//delete pi2;


	const int *pci = new const int(1024);
	cout << *pci << endl;
	delete pci;

	string* ps;
	char* ss;
	{
		char *s = "jjjjj";
		ss = s;
		ps = new string("hello");
		delete ps;
	}

	cout << *ps << endl;
	cout << *ss << endl;
*/

	cout << "end " << endl;

	//vector<int>* pvec = ff();
	//print(read(pvec));

	shared_ptr<vector<int>> ppp, pp1;
	ppp = ff1();
	pp1 = read1(ppp);
	print1(pp1);


	int *x(new int(1024));
	process(make_shared<int>(88));
	//process(shared_ptr<int>(x));
	int j = *x;
	cout << j  << endl;

}