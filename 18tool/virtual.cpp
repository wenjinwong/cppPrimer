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


class Raccoon : public virtual ZooAnimal { };
class Bear : virtual public ZooAnimal { };

class Panda : public bear, public raccoon , public endangered {
	public:
		init() : zooAnimal(name, onExhibit), RACCON(name, exhibit),...{}

};


int main()
{

    return 0;
}
