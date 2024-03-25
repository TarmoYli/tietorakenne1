#include "Person.h"


Person::Person(){}

Person::Person(std::string aName, std::string aNumber, std::string aAddress)
{
	this->name = aName;
	this->phoneNumber = aNumber;
	this->address = aAddress;
	std::cout << name << " luotu" << std::endl;

}

Person::~Person()
{
	std::cout << name << " tuhottu." << std::endl;
}

void Person::printStats() const
{
	std::cout << "NAME: " << this->name << std::endl;
	std::cout << "NUMBER: " << this->phoneNumber << std::endl;
	std::cout << "ADDRESS: " << this->address << std::endl;
}