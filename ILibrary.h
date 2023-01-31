#pragma once
#include <queue>
#include "Book.h"
#include "User.h"
class ILibrary {
public:
	virtual ~ILibrary() {}
	virtual void AddBook(Book& book) = 0;
	virtual void DeleteBook(int id) = 0;
	virtual void SetBook(int id) = 0;
	virtual void RegistrationUser(User& user) = 0;
};