#pragma once
#include <string>
#include <vector>
#include "Book.h"
static int ST_ID_USER;
class User
{
public:
	User(const std::string& name);
	const std::string& GetName()const;
	void RequestedBook(const Book& book);
	const int GetId()const;
	const std::vector<Book>& GetSB()const;
private:
	std::string _name;
	std::vector<Book> _bookSearch;
	int _id;
};

