#include "Menu.h"

std::string Menu::printMenu()
{
	std::cout << "HENKIL�IDEN / PUH.NUMEROIDEN K�SITTELY" << std::endl;
	std::cout << "a.Lis�� uusi henkil�" << std::endl;
	std::cout << "b.N�yt� ensimm�inen henkil�" << std::endl;
	std::cout << "c.N�yt� seuraava henkil�" << std::endl;
	std::cout << "d.Poista kohdalla oleva henkil�" << std::endl;
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
	std::cout << "Sy�t� nimi: " << std::endl;
	
	std::getline(std::cin, addName);
	std::cout << "Sy�t� osoite: " << std::endl;
	
	std::getline(std::cin, addAddress);
	std::cout << "Sy�t� puhelin numero: " << std::endl;
	
	std::getline(std::cin, addPhoneNumber);
	Person addPerson(addName, addPhoneNumber, addAddress);
	return addPerson;
}