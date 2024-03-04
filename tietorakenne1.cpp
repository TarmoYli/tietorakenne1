
#include <iostream>
#include "LinkedList.h"
#include "Person.h"


int main()
{
	Person::totalPersons();
	Person *user1 = new Person("Pekko", "044123123", "kotiosoite 12 c 12");	
	user1->printStats();
	Person::totalPersons();
	delete user1;
	Person::totalPersons();
	return 0;
}