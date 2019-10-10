#include<string>
#include<iostream>
#include<tuple>
#include<vector>


typedef tuple<vector<Sales_data>::type, 
		vector<Sales_data>::const_iterator, 
		vector<Sales_data>::const_iteratro> matches;
// files saved record about each store
// parameter(const vector<vector<Sales_data>> &files, const stirng& bool) return(vector)

vector<matches> findBook(const vector<vector<Sales_data>> &files, const string& book)
{
	vector<matches> ret;
	for(auto it = files.cbegin(); it != files.cend(); ++it)
	{
		auto found = equal_range(it->cbegin(), it->cend(), book, compareIsbn);
		if(found.first != found.second)
			ret.push_back(make_tuple(it - files.cbegin(), found.first, found.second));
	}
	return ret;
}


return make_pair<iter, index>(a, b);


void reportResults(istream& in, ostream& os, const vector<vector<Sales_data>> &file)
{
	string s;
	while(in >> s)
	{
		auto trans = findBook(files, s);
		if(trans.empty()) {
			cout << s << "not found in any stores" << endl;
			continue;
		}
		for(const auto &store : trans)
			os << "sotre : " << get<0>(store) << " sales: " << auccmulate(get<1>(store), get<2>(store),
					Sales_data(s)) << endl;
	}
}

int main()
{
	assert(argc > 1);
	vector<vector<Sales_data> > files;
	for(int cnt  = 1; cnt != argc; ++cnt)
		files.push_back(build_store(aargv[cnt]))

			ifstream in("findbook.in");
	reportResults(in, cout , files);
}

