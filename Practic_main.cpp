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
	User U1("Alex",3);
	User U2("Bob",2);
	U1.RequestedBook(b1);
	U2.RequestedBook(b2);
	Library labrary;
	labrary.AddBook(b1);
	labrary.AddBook(b2);
	labrary.RegistrationUser(U1);
	labrary.RegistrationUser(U2);
	labrary.ShowBooks();
	labrary.SearchBook("Идиот");


	return 0;
}