
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
	list.pushData(menu.makePerson());
	list.pushData(menu.makePerson());
	list.pushData(menu.makePerson());
	list.printOne();
	std::cout << "ja nyt koko lista:" << std::endl;
	list.printList();
	
	return 0;
}

//LC_ALL: Finnish_Finland.1252
//LC_CTYPE : Finnish_Finland.1252