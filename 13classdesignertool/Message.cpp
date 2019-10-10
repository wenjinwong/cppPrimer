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

class Message;

class Folder{
public:
	explicit Folder();
	~Folder();
	Folder& operator=(Folder&);
	Folder(const Folder&);
	void addMsg(Message* rhs);
	void remMsg(Message* rhs);
	void add_to_Messages(const Folder &f);
	void remove_from_Msgs();
private:
	set<Message*> messages;
};

/*
void Folder::addMsg(Message& rhs) { messages.save(rhs); }
void Folder::remMsg(Message& rhs) { messages.erase(rhs); }

Folder::Folder()
{
	messages = new set<Message*>();
}

Folder::Folder(const Folder& rhs) : messages(rhs.messages) {
	for(auto m : messages)
		m.save(this);
}

Folder& Folder::operator=(Folder& rhs) {
	for(auto m : messages)
		m.remove(this);
	for(auto m : rhs.messages)
		m.remove(rhs);
	messages = rhs.messages;
	for(auto m : messages)
		m.save(this);
	return *this;
}
*/
	
class Message {
	friend class Folder;
	friend void swap(Message& lhs, Message& rhs);
public:
	// floders implicity initialized as empty set
	explicit Message(const string &str = "") : 
		contents(str) {}
	//copy control member, used to manage points which point to this
	Message(const Message&);
	Message& operator=(const Message&);
	~Message();
	//remove or add this from Folder
	void save(Folder&);
	void remove(Folder&);
	void save(Folder*);
	void remove(Folder*);
	void addFldr(Folder *f) {folders.insert(f); }
	void remFldr(Folder *f) { folders.erase(f); }
	Message(Message &&m) : contents(move(m.contents))
	{
		move_Folders(&m);
		add_to_Folders(*this);
	}
	Message& operator=(Message &&rhs);
private:
	string contents;	//message text
	set<Folder*> folders;//folder contain this message 
	//copy construct function, = , deconstruct function tool
	//add this into folder
	void add_to_Folders(const Message&);
	//remove this form folders
	void remove_from_Folders();
	void move_Folders(Message *m);
};

Message& Message::operator=(Message &&rhs)
{
	if(this != &rhs)
	{
		remove_from_Folders();
		contents = std::move(rhs.contents);
		move_Folders(&rhs);
	}
	return *this;
};

void Message::move_Folders(Message* m)
{
	folders = std::move(m->folders);
	for(auto f : folders)
	{
		f->remMsg(m);
		f->addMsg(this);
	}
	m->folders.clear();
}


void Folder::addMsg(Message* rhs) { messages.insert(rhs); }
void Folder::remMsg(Message* rhs) { messages.erase(rhs); }

void Message::save(Folder *f)
{
	folders.insert(f);
	f->addMsg(this);
}
void Message::save(Folder &f)
{
	folders.insert(&f);
	f.addMsg(this);
}

void Message::remove(Folder& f)
{
	folders.erase(&f);
	f.remMsg(this);
}
void Message::remove(Folder* f)
{
	folders.erase(f);
	f->remMsg(this);
}


/*
void Folder::addMsg(Message* rhs) { messages.insert(rhs); }
void Folder::remMsg(Message* rhs) { messages.erase(rhs); }
*/

void Message::add_to_Folders(const Message& m)
{
	for(auto f : m.folders)
		f->addMsg(this);
}


Message::Message(const Message& m) : contents(m.contents), 
	folders(m.folders)
{
	add_to_Folders(m);
}

void Message::remove_from_Folders() 
{
	for(auto f : folders)
		f->remMsg(this);
}

Message::~Message()
{
	remove_from_Folders();
}

Message& Message::operator=(const Message& rhs)
{
	remove_from_Folders();
	contents = rhs.contents;
	folders = rhs.folders;
	add_to_Folders(rhs);
	return *this;
}

void swap(Message& lhs, Message& rhs)
{
	for(auto f : lhs.folders)
		f->remMsg(&lhs);
	for(auto f : rhs.folders)
		f->remMsg(&rhs);
	swap(lhs.folders, rhs.folders);
	swap(lhs.contents, rhs.contents);
	for(auto f : lhs.folders)
		f->addMsg(&lhs);
	for(auto f : rhs.folders)
		f->addMsg(&rhs);
}




/*
void Folder::addMsg(Message& rhs) { messages.save(rhs); }
void Folder::remMsg(Message& rhs) { messages.erase(rhs); }
*/
Folder::Folder() {}

Folder::Folder(const Folder& rhs) : messages(rhs.messages) {
    for(auto m : messages)
        m->save(*this);
}

void Folder::add_to_Messages(const Folder& f)
{
	for(auto msg : f.messages)
		msg->addFldr(this);
}

void Folder::remove_from_Msgs()
{
	while(!messages.empty())
		(*messages.begin())->remove(*this);
}



Folder& Folder::operator=(Folder& rhs) {
    for(auto m : messages)
        m->remove(*this);
    messages = rhs.messages;
    add_to_Messages(rhs);
    return *this;
}
Folder::~Folder() 
{
	remove_from_Msgs();
}


int main()
{
    return 0;
}
