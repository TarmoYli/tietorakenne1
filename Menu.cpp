#include "Menu.h"

std::string Menu::printMenu()
{
	std::cout << "HENKILÖIDEN / PUH.NUMEROIDEN KÄSITTELY" << std::endl;
	std::cout << "a.Lisää uusi henkilö" << std::endl;
	std::cout << "b.Näytä ensimmäinen henkilö" << std::endl;
	std::cout << "c.Näytä seuraava henkilö" << std::endl;
	std::cout << "d.Poista kohdalla oleva henkilö" << std::endl;
	std::cout << "e.Tulosta kaikki tietueet" << std::endl;
	std::cout << "0. Lopetus" << std::endl;
	std::cin >> choice;
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