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

/*HENKIL�IDEN / PUH.NUMEROIDEN K�SITTELY
a.Lis�� uusi henkil�
b.N�yt� ensimm�inen henkil�
c.N�yt� seuraava henkil�
d.Poista kohdalla oleva henkil�
e.Tulosta kaikki tietueet
0. Lopetus*/

#endif // !MENU