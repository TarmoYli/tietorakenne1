#pragma once
#ifndef PERSON
#define PERSON

#include <iostream>
#include <string>

class Person
{
public:
	Person();
	Person(std::string aName, std::string aNumber, std::string aAddress);
	~Person();
	std::string name;
	std::string phoneNumber;
	std::string address;
	void printStats() const;
};
#endif // !PERSON