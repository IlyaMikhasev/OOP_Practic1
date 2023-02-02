#pragma once
#include <map>
#include <iostream>
#include "ILibrary.h"
#include "User.h"
#include <queue>
class Library: public ILibrary 
{
public:
	Library();
	void AddBook(const Book& book)override;
	void DeleteBook(int id)override;
	void SetBook(int id, const std::string& newContent) override;
	void RegistrationUser(const User& user)override;
	bool SearchBook(const std::string& title);
	void ShowBooks();	
	void Pop();
private:
	std::queue <User> _users;
	std::map<int,Book> _books;
	int _id;
};

