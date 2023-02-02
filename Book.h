#pragma once
#include <string>
#include <iostream>
class Book{
public:
	Book(const std::string& author,int year,const std::string& title,const std::string& content);
	Book(const std::string& author, int year, const std::string& title);
	Book() {}
	const std::string& GetAuthor()const;
	const int GetYear()const;
	const std::string& GetTitle()const;
	void SetContent(const std::string& cont);
	void SetAuthor(const std::string& author);
	void SetTitle(const std::string& title);
	void SetYear(int year);
	bool operator==(const Book& obj);
private:
	std::string _author;
	int _year;
	std::string _title;
	std::string _content;
};

