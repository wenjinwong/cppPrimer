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

class Query_base {
	friend class Query;
protected:
	using line_no = TextQuery::line_no;
	virtual ~Query_base() = default;
private:
	virtual QueyResult eval(const TextQuery&) const = 0;
	virtual string rep() const = 0;
};


class Query {
	friend Query operator~(const Query&);
	friend Query operator|(const Query&, const Query&);
	friend Query operator&(const Query&, const Query&);
public:
	Query(const string&);
	QueryResult eval(const TextQuery& t) const {return q->eval(t);}
	string rep() const { return q->rep(); }
	ostream& operator<<(ostream& os, const Query& query) { return os << query.rep(); }
private:
	Query(shared_ptr<Query_base> query) : q(query) {}
	shared_ptr<Query_base> q;
};


class WordQuery : public Query_base {
	friend class Query;
	WordQuery(const string& s) : query_word(s) {}
	QueryResult eval(const TextQuery &t) const 
	{ return t.query(query_word); }
	string rep() const{ return query_word; }
	string query_word;
};


inline Query::Query(const string& s) : q(new WordQuery(s)){}

class NotQuery : public Query_base {
	friend Query operator~(const Query &);
	NotQuery(const Query& q) : query(q) {}
	string rep() const { return "~(" + query.rep() + ")";}
	Query query;
};

inline Query operator~(const Query &operand)
{
	return shared_ptr<Query_base>(new NotQuery(operand));
}

class BinaryQuery : public Query_base {
protected:
	BinaryQuery(const Query&l, const Quey &r, string s) :
		lhs(l), rhs(r), opSym(s) {}
	string rep const { return "(" + lhs.rep() + " " + opSym + " " + rhs.rep() + ")";}
	Query lsh, rhs;
	string opSym;
}

class AndQuery : pulic BinaryQuery {
	friend Query operator&(const Query&, const Query&) ;
	AndQuery(const Query &left, const Query& right) : BinaryQuery(left, right, "&") {}
	QueryResult eval(const TextQuery &) const;
};
inline Query operator&(const Query &lhs, cont Query& rhs)
{
	return shared_ptr<Query_base>(new AndQuery(lhs, rhs));
}

class OrQuery : public BinaryQuery {
	friend Query operator|(const Query&, const Query&);
	OrQuery(const QUery& left, const Query &right) : Binary(left, right, "|") {}
	QueryResult eval(const TextQuery&) const;
};

inline Query operator|(const Query& lhs, const Query &rhs)
{
	return shared_ptr<Query_base>(new OrQuery(lhs, rhs));
}


QueryResult OrQuery::eval(const TextQuery& text) const 
{
	auto right = rhs.eval(text), left = lhs.eval(text);
	auto ret_line = make_shared<set<line_no>>(left.begin(), left.end());
	ret_line->insert(right.begin(), right.end());
	return QueryResult(rep(), ret_lines, left.get_file());
}


QueryResult AndQuery::eval(const TextQUery& text ) const {
	auto lef = lhs.eval(text), right = rhs.eval(text);
	auto ret_lines = make_shared<set<line_no>> ();
	set_intersection(left.begin(), left.end(), right.begin(), right.end(), inserter(*ret_lines, ret_lines->begin()));
	return QueryResult(rep(), ret_lines, left.get_file());
}

QUeryResult NotQuery::eval(const TextQuery& text) const 
{
	auto result = query.eval(text);
	auto ret_lines = make_shared<set<line_no>>();
	auto beg = resule.begin(), end = result.end();
	auto sz = result.get_file() ->size();
	for(size_t n = 0; n != sz; ++n) {
		if(beg == end || *beg !=n)
			ret_lines->insert(n);
		else if (beg != end)
			++beg;
	}
	return QueryResult(rep(), ret_lines, result.get_file());
}

int main()
{
    return 0;
}
