#include <iostream>
#include <string>
#include "Book.h"
#include "ILibrary.h"
#include "Library.h"
#include "User.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Book b1("Достоевский", 1987, "Идиот");
	Book b2("Мураками", 1995, "Охота на овец");
	Book b3("Джек Лондон", 1867, "Мартин Иден");
	Book b4("Братья Стругацие", 1977, "Понедельник начинается в субботу");
	User U1("Alex");
	User U2("Bob");
	U1.RequestedBook(b1);
	U1.RequestedBook(b3);
	U2.RequestedBook(b2);
	U2.RequestedBook(b4);
	Library labrary;
	labrary.AddBook(b1);
	labrary.AddBook(b2);
	labrary.AddBook(b3);
	labrary.AddBook(b4);
	labrary.RegistrationUser(U1);
	labrary.RegistrationUser(U2);
	labrary.ShowBooks();
	labrary.Pop();
	labrary.ShowBooks();
	labrary.Pop();
	return 0;
}