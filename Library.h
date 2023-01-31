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
	void AddBook(Book& book)override;
	void DeleteBook(int id)override;
	void SetBook(int id) override;
	void RegistrationUser(User& user)override;
	void SearchBook(const std::string& title);
	void ShowBooks();	
	void Pop();
private:
	void ChekOutTheVisitor();
	std::queue <User> _users;
	std::map<int,Book> _books;
	std::map<int, Book>::iterator  _it;
	int _id;
};

