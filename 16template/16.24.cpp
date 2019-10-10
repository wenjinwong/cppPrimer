template<class T> int compare(const T& lhs, const T& rhs)
{
	return lhs < rhs;
}

int main() 
{
	compare("bye", "dad");
}
