#include<bitset>

template<size_t N>
class exam{
public:
	exam() : s() {}
	size_t get_size() { return N; }
	void set_solution() const { return s ; }
	size_t score(const bitset<N> & a);
private:
	bitset<N> s;
};

template<size_t N> 
size_t exam<N>::score(const bitset<N> &a)
{
	size_t ret = 0;
	for(size_t i = 0; i < N; i++)
		if(s[i] == a[i])
			ret++;
	return ret;
}

int main() 
{
	exam<80> e;
	e.set_solution(0,1);
	e.set_solution(79, 1);
	cout << e.get_solution() << endl;
	bitset<80> a;
	cout << e.get_size() << " items is right: " << e.score(a) << " ," << endl;
	return 0;
};


