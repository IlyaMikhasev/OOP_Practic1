#pragma once
#include <string>
#include <iostream>
class Book{
public:
	Book(const std::string& author,int year,const std::string& title,const std::string& content);
	Book(const std::string& author, int year, const std::string& title);
	Book() {}
	const std::string& GetAuthor();
	const int GetYear();
	const std::string& GetTitle();
	void SetContent(const std::string& cont);
private:
	std::string _author;
	int _year;
	std::string _title;
	std::string _content;
};

