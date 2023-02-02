#include "Library.h"
#include <iostream>
Library::Library():_id(1) {}

void Library::AddBook(const Book& book) {
	const auto& [it, isinsert] = _books.insert({ _id, book });
	if (!isinsert)
		std::cout << " нига не добваленна\n";
	else {
		std::cout << " нига \""<<it->second.GetTitle()<<"\" добавленна\n";
	}
	_id++;
}

void Library::DeleteBook(int id){
	if(!_books.erase(id))
		std::cout << " ниги с данным id несуществует\n";
	std::cout << " нига удаленна из билеотеки\n";
}

void Library::SetBook(int id, const std::string& newContent){
	auto it = _books.find(id);
	it->second.SetTitle(newContent);
}

void Library::RegistrationUser(const User& user){
	_users.push(user);
}

void Library::Pop() {
	User user = _users.front();
	for (auto it = user.GetSB().begin(); it != user.GetSB().end(); it++) {
		if (SearchBook(it->GetTitle())) {
			std::cout << " нига " << it->GetTitle() << " выдана пользователю "<<user.GetName()<<'\n';
		}
	}
	_users.pop();
}

bool Library::SearchBook(const std::string& title){
	for (auto it = _books.begin(); it != _books.end(); it++) {
		if (it->second.GetTitle() == title) {
			DeleteBook(it->first);
			return true;
		}
	}
	return false;	
}


void Library::ShowBooks(){	
	for (const auto[id,book]:_books) {
		std::cout << "Id: " << id << "\tbook: " << book.GetTitle() << std::endl;
	}
}

