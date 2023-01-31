#include "User.h"

User::User(const std::string& name,int id):_name(name),_id(id) {}

const std::string& User::GetName()const{
	return _name;
}

void User::RequestedBook(Book& book){
	_bookSearch.push_back(book);
}

const int User::GetId(){
	return _id;
}

std::vector<Book>& User::GetSB()
{
	return _bookSearch;
}
