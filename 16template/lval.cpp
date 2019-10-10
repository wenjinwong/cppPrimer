template<typename T> void f1(T& a)
{
	int val;
}

template<typename T> void f2(const T&)
{
	;
}

template<typename T> void f3(const T&&)
{
	;
}


int main()
{
	int mm = 8;
	f3(mm);
	int i = 1;
	f1(i);
	const int ci = 8;
	f1(ci);
#ifndef NDEBUG
	f1(5);
#endif
	f2(6);
	return 0;
}

