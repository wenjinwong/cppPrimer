template<typename T> void f3(T&& t)
{;}

int main()
{
	f3(42);
	int x = 8;
	f3(x);
	using ty = int&&;
	ty t(6);
	int a = t;
}
