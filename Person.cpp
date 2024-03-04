#include "Person.h"


Person::Person(std::string aName, std::string aNumber, std::string aAddress)
{
	this->name = aName;
	this->phoneNumber = aNumber;
	this->address = aAddress;
}

Person::~Person()
{
	std::cout << this->name << " Destroyed." << std::endl;
}

void Person::printStats()
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "NUMBER: " << this->phoneNumber << std::endl;
	std::cout << "ADDRESS: " << this->address << std::endl;
}
