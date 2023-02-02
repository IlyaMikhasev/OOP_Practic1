#include "Library.h"
#include <iostream>
Library::Library():_id(1) {}

void Library::AddBook(const Book& book) {
	const auto& [it, isinsert] = _books.insert({ _id, book });
	if (!isinsert)
		std::cout << "����� �� ����������\n";
	else {
		std::cout << "����� \""<<it->second.GetTitle()<<"\" ����������\n";
	}
	_id++;
}

void Library::DeleteBook(int id){
	if(!_books.erase(id))
		std::cout << "����� � ������ id ������������\n";
	std::cout << "����� �������� �� ���������\n";
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
			std::cout << "����� " << it->GetTitle() << " ������ ������������ "<<user.GetName()<<'\n';
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

