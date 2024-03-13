
#include <iostream>
#include <locale.h>
#include "LinkedList.h"
#include "Person.h"
#include "Menu.h"

std::string userChoice;


int main()
{
	setlocale(LC_ALL, "Finnish_Finland.1252");

	Menu menu;
	Linkedlist list;
	
	Node* eka;
	Node* toka;
	Node* koka;

	std::cout << "head: " << list.head << std::endl;
	list.pushData(menu.makePerson());
	eka = list.head;
	std::cout << "head: " << list.head << std::endl;
	list.pushData(menu.makePerson());
	toka = list.head;
	std::cout << "head: " << list.head << std::endl;
	list.pushData(menu.makePerson());
	koka = list.head;
	std::cout << "head: " << list.head << std::endl;

	std::cout << "1. " << eka << std::endl;
	std::cout << "2. " << toka << std::endl;
	std::cout << "3. " << koka << std::endl;

	eka->Data.printStats();

	return 0;
}

//LC_ALL: Finnish_Finland.1252
//LC_CTYPE : Finnish_Finland.1252