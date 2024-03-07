#include "Person.h"

int Person::total = 0;

Person::Person()
{
}

Person::Person(std::string aName, std::string aNumber, std::string aAddress)
{
	this->name = aName;
	this->phoneNumber = aNumber;
	this->address = aAddress;
	std::cout << name << " luotu" << std::endl;
	total++;
}

Person::~Person()
{
	std::cout << name << " tuhottu." << std::endl;
	total--;
}

void Person::printStats() const
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "NUMBER: " << this->phoneNumber << std::endl;
	std::cout << "ADDRESS: " << this->address << std::endl;
}


void Person::totalPersons()
{
	std::cout << "total #: " << Person::total << std::endl;
}
