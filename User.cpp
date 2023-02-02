#include "User.h"

User::User(const std::string& name):_name(name),_id(ST_ID_USER) {
	ST_ID_USER++;
}

const std::string& User::GetName()const{
	return _name;
}

void User::RequestedBook(const Book& book){
	_bookSearch.push_back(book);
}

const int User::GetId()const{
	return _id;
}

const std::vector<Book>& User::GetSB()const
{
	return _bookSearch;
}
