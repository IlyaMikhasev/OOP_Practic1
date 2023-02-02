#include <iostream>
#include <string>
#include "Book.h"
#include "ILibrary.h"
#include "Library.h"
#include "User.h"
int main() {
	setlocale(LC_ALL, "Russian");
	Book b1("�����������", 1987, "�����");
	Book b2("��������", 1995, "����� �� ����");
	Book b3("���� ������", 1867, "������ ����");
	Book b4("������ ���������", 1977, "����������� ���������� � �������");
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