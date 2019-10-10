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


template<typename T> class BlobPtr;
template<typename T> class Blob;
template<typename T> bool operator==(const Blob<T>&, const Blob<T>&);


template<typename T> class Blob {
	friend class BlobPtr<T>;
	friend bool operator==<T>(const Blob<T>&, const Blob<T>&);
public:
	typedef T value_type;
	typedef typename vector<T>::size_type size_type;
	Blob() : data(make_shared<vector<T>>()) {}
	Blob(initializer_list<T> il): data(make_shared<vector<T> >(il.begin(), il.end())) {}
	template<typename IT> Blob(IT b, IT e) : data(make_shared<vector<T> >(b, e)) {}
	size_type size() const { return data->size(); }
	bool empty() const { return data->empty(); }
	void push_back(const T &t) { data->push_back(t);}
	void push_back(T &&t) { data->push_back(std::move(t));}
	void pop_back();
	T& back();
	T& operator[](size_type i);
	const T& operator[](size_type i) const;
private:
	shared_ptr<vector<T> > data;
	void check(size_type i, const string& msg) const ;
};



template<typename T>
void Blob<T>::check(size_type i, const string &msg) const {
	if(i >= data->size())
		throw out_of_range(msg);
}

template<typename T>
T& Blob<T>::back() 
{
	check(0, "back on empty Blob");
	return data->back();
}

template<typename T>
T& Blob<T>::operator[](size_type i) 
{
	check(i, "subscript out of range");
	return (*data)[i];
}

template<typename T>
const T& Blob<T>::operator[](size_type i) const
{
	check(i, "subscript out of range");
	return (*data)[i];
}

template<typename T> void Blob<T>::pop_back()
{
	check(0, "pop back on empty Blob");
	data->pop_back();
}


template<typename T>class BlobPtr {
public:
	BlobPtr() : curr(0) {}
	BlobPtr(Blob<T> &a, size_t sz=0) : wptr(a.data), curr(sz) {}
	T& operator*() const { auto p = check(curr, "dereference past end");
		return (*p)[curr];
	}
	BlobPtr<T>& operator++();
	BlobPtr& operator--();
private:
	shared_ptr<vector<T>> check(size_t, const string&) const;
	weak_ptr<vector<T>> wptr;
	size_t curr;
};


template<typename T>
BlobPtr<T> BlobPtr<T>::operator++(int)
{
	BlobPtr ret  = *this;
	++*this;
	return ret;
}




int main()
{
	Blob<int> ia;
	Blob<int> ia2 = {0,1,2,3,4};
	Blob<string> bs = {"aa" , "ath"};
	cout << bs[1];
	
    return 0;
}
