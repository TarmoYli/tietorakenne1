#pragma once
#ifndef MENU
#define MENU

#include <iostream>
#include <string>
#include <conio.h>
#include "LinkedList.h"
#include "Person.h"

class Menu
{
public:
	char printMenu();
	char choice;
	Person makePerson();
};

/*HENKILÖIDEN / PUH.NUMEROIDEN KÄSITTELY
a.Lisää uusi henkilö
b.Näytä ensimmäinen henkilö
c.Näytä seuraava henkilö
d.Poista kohdalla oleva henkilö
e.Tulosta kaikki tietueet
0. Lopetus*/

#endif // !MENU