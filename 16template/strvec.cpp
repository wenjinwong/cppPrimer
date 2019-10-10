class strvec {
	public:
		template<class ...Args>void emplace_back(Args&&...);
};

template<class ...Args>
inline void strvec::emplace_back(Args&&... args)
{
	chk_n_alloc();
	alloc.construct(first_free++, std::forward<Args>(args)...);
}

template<typename T, class ...Args>
sP<T> make_SP(args&&... args)
{
	return SP<T>(new T(std::forword<Args>(args)...));

}


