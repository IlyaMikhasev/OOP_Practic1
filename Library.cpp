#include "Library.h"
#include <iostream>
Library::Library():_id(1) {}

void Library::AddBook(Book& book) {
	const auto& [it, isinsert] = _books.insert({ _id, book });
	if (!isinsert)
		std::cout << "Книга не добваленна\n";
	else {
		std::cout << "Книга добавленна\n";
	}
	_id++;
}

void Library::DeleteBook(int id){
	if(!_books.erase(id))
		std::cout << "Книги с данным id несуществует\n";
	std::cout << "Книга удаленна\n";
}

void Library::SetBook(int id){
	_it = _books.find(id);
	std::string content;
	std::cout << "Введите описание: ";
	getline(std::cin, content);
	if (_it != _books.end()) {
		_books[id].SetContent(content);
	}
	else
		std::cout << "По данному Id книг нет";
}

void Library::RegistrationUser(User	&user){
	_users.push(user);
}

//void Library::Pop() {
//	User us = _users.front();
//	//allBooksTraversed = 0;
//	while (_users.front().GetSB().size() != 0) {
//		Book lastbook = us.GetSB().size()
//		std::string title = lastbook.GetTitle();
//	}
//}

void Library::SearchBook(const std::string& title){
	for (int i = 0; i < _books.size(); i++) {
		if (_books[i].GetTitle() == title) {
			for (size_t j = 0; j < _users.front().GetSB().size(); j++)
			{
				if (_books[i].GetTitle() == _users.front().GetSB()[j].GetTitle()) {
					ChekOutTheVisitor();
					std::cout << "Книга выдана\n";
					return;
				}
			}
		}
		else
			std::cout << "Такой книги нет\n";
	}
}


void Library::ShowBooks(){	
	for (_it = _books.begin(); _it != _books.end(); _it++) {
		std::cout << "Id: " << _it->first << "\tbook: " << _it->second.GetTitle() << std::endl;
	}
}


void Library::ChekOutTheVisitor(){
	_users.pop();
}
