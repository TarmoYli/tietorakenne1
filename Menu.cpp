#include "Menu.h"


char Menu::printMenu()
{
	std::cout << "HENKILÖIDEN / PUH.NUMEROIDEN KÄSITTELY" << std::endl;
	std::cout << "a.Lisää uusi henkilö alkuun" << std::endl;
	std::cout << "b.Lisää uusi henkilö loppuun" << std::endl;
	std::cout << "c.Näytä ensimmäinen henkilö" << std::endl;
	std::cout << "d.Näytä seuraava henkilö" << std::endl;
	std::cout << "e.Poista kohdalla oleva henkilö" << std::endl;
	std::cout << "f.Tulosta kaikki tietueet" << std::endl;
	std::cout << "g.Poista henkilö nimen mukaan" << std::endl;
	std::cout << "0. Lopetus" << std::endl;
	std::cin >> choice;
	std::cin.clear();
	std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
	return choice;
}

Person Menu::makePerson()
{
	std::string addName;
	std::string addAddress;
	std::string addPhoneNumber;
	std::cout << "Syötä nimi: " << std::endl;
	std::getline(std::cin, addName);
	std::cout << "Syötä osoite: " << std::endl;
	std::getline(std::cin, addAddress);
	std::cout << "Syötä puhelin numero: " << std::endl;
	std::getline(std::cin, addPhoneNumber);
	Person addPerson(addName, addPhoneNumber, addAddress);
	return addPerson;
}