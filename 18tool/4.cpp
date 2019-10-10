namespace ex{
	int ivar  =0;
	double dvar = 0;
	const int limit = 1000;
}

int ivar = 0;

int main()
{
	using namespace ex;
	dvar = 432;
	double dvar = 34.24;
	int iobj = limit + 1;
	//++ivar;
	++::ivar;
	return 0;
}
