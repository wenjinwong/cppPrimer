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

using namespace std;

class TreeNode {
public:
	TreeNode() : value(""), count(0), left(nullptr), right(nullptr)
	{}
	TreeNode(const TreeNode& rhs)
	{
		value = rhs.value;
		count = rhs.count;
		left = new TreeNode(*rhs.left);
		right = new TreeNode(*rhs.right);
	}
	TreeNode& operator= (TreeNode& rhs) 
	{
		value = rhs.value;
		count = rhs.count;
		left = new TreeNode(*rhs.left);
		right = new TreeNode(*rhs.right);
	}
	~TreeNode()
	{
		delete left;
		delete right;
	}
private:
	string value;
	int count;
	TreeNode *left;
	TreeNode *righr;
};

class BinStrTree {
public:
	BinStrTree()
	{
		root = nullptr;
	}
	BinStrTree& operator=(const BinStrTree& rhs) : root(new TreeNode(*rhs.root)) {}
	BinStrTree(const BinStrTree& rhs) : root(new TreeNode(*rhs.root) {}
private:
	TreeNode *root;
}



