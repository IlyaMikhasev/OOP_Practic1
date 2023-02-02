#include "Book.h"

Book::Book(const std::string& author, int year,const std::string& title,const std::string& content):
_author(author),_year(year),_title(title),_content(content){}

Book::Book(const std::string& author, int year,const std::string& title):_author(author), _year(year), _title(title){}

const std::string& Book::GetAuthor()const{
	return _author;
}

const int Book::GetYear()const {
	return _year;
}

const std::string& Book::GetTitle()const{
	return _title;
}

void Book::SetContent(const std::string& cont){
	_content = cont;
}

void Book::SetAuthor(const std::string& author){
	_author = author;
}

void Book::SetTitle(const std::string& title){
	_title = title;
}

void Book::SetYear(int year){
	_year = year;
}

bool Book::operator==(const Book& obj){
	return obj.GetTitle() == this->GetTitle();
}
