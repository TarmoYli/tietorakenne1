
#include <iostream>
#include <locale.h>
#include "LinkedList.h"
#include "Person.h"
#include "Menu.h"

std::string userChoice;

static void waitForEnter()
{
	std::cout << "Paina enter jatkaaksesi..." << std::endl;
	std::cin.get();
}

int main()
{
	setlocale(LC_ALL, "Finnish_Finland.1252");

	Menu menu;
	Linkedlist list;
	std::string delName;

	bool isRunning = true;
	do
	{
		switch (menu.printMenu())
		{
			case('a'):
				list.pushData(menu.makePerson());
				waitForEnter();
				break;
			case('b'):
				list.appendData(menu.makePerson());
				waitForEnter();
				break;
			case('c'):
				list.printOne();
				waitForEnter();
				break;
			case('d'):
				list.printNext();
				waitForEnter();
				break;
			case('e'):
				list.deleteCurrent();
				waitForEnter();
				break;
			case('f'):
				list.printList();
				waitForEnter();
				break;
			case('g'):
				std::cout << "Anna poistettavan nimi: " << std::endl;
				std::getline(std::cin, delName);
				list.deleteByName(delName);
				waitForEnter();
				break;
			case('0'):
				std::cout << "Näkemiin." << std::endl;
				isRunning = false;
				break;
		}
	} while (isRunning);

	return 0;
}
/*HENKILÖIDEN / PUH.NUMEROIDEN KÄSITTELY
a.Lisää uusi henkilö
b.Näytä ensimmäinen henkilö
c.Näytä seuraava henkilö
d.Poista kohdalla oleva henkilö
e.Tulosta kaikki tietueet
0. Lopetus*/
//LC_ALL: Finnish_Finland.1252
//LC_CTYPE : Finnish_Finland.1252