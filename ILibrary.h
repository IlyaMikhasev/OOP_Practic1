#pragma once
#include <queue>
#include "Book.h"
#include "User.h"
class ILibrary {
public:
	virtual ~ILibrary() {}
	virtual void AddBook(const Book& book) = 0;
	virtual void DeleteBook(int id) = 0;
	virtual void SetBook(int id, const std::string& newContent) = 0;
	virtual void RegistrationUser(const User& user) = 0;
};