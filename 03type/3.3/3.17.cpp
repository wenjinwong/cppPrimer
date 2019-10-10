#include<vector>
#include<iostream>
#include<cctype>

using namespace std;
int main()
{
	vector<string> vi;
	string tmp;
	while(cin >> tmp && tmp != "exit")
	{
		for(auto &c : tmp) toupper(c);
		for(auto it=tmp.begin();it!= tmp.end() && !isspace(*it); ++it) *it =
			toupper(*it);
		vi.push_back(tmp);
	}
	for(decltype(vi.size()) start = 0; start < vi.size(); start++)
		cout << vi[start] << endl;
}
