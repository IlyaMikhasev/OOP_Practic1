#pragma once
#include <string>
#include <vector>
#include "Book.h"
class User
{
public:
	User(const std::string& name,int id);
	const std::string& GetName()const;
	void RequestedBook(Book& book);
	const int GetId();
	std::vector<Book>& GetSB();
private:
	std::string _name;
	std::vector<Book> _bookSearch;
	int _id;
};

