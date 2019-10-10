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
#include<bitset>
#include<tuple>
#include<random>
#include<cmath>

using namespace std;

typedef unsigned int Bit;
class File{
	Bit mode: 2;
	Bit modified:1;
	Bit prot_owner: 3;
	Bit prot_group: 3;
	Bit prot_world: 3;
public:
	enum modes {READ = 01, WRITE = 02, EXECUTE = 3};
	File &open(modes);
	void close();
	void write();
	bool isRead() const;
	void setWrite();
};

void File::write()
{
	modified = 1;
	//
}

void File::close()
{
	if(modified)
		//save
}

File &File::opern(File::modes m)
{
	mode |= READ;
	if(m & WRITE)
		//read write
	return *this;
}



int main()
{
    return 0;
}
