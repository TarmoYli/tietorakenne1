#pragma once
#include <iostream>
#include <string>

class Person
{
public:

	Person(std::string aName = "n/a", std::string aNumber = "n/a", std::string aAddress = "n/a");
	~Person();
	std::string name;
	std::string phoneNumber;
	std::string address;
	void printStats();

	static int total;
	static void totalPersons();
};

