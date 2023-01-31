#include "Book.h"

Book::Book(const std::string& author, int year,const std::string& title,const std::string& content):
_author(author),_year(year),_title(title),_content(content){}

Book::Book(const std::string& author, int year,const std::string& title):_author(author), _year(year), _title(title){}

const std::string& Book::GetAuthor(){
	return _author;
}

const int Book::GetYear(){
	return _year;
}

const std::string& Book::GetTitle(){
	return _title;
}

void Book::SetContent(const std::string& cont){
	_content = cont;
}
