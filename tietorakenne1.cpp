
#include <iostream>
#include "LinkedList.h"
#include "Person.h"


int main()
{
	Person user1 = Person("Pekko", "044123123", "kotiosoite 12 c 12");	
	Person user2 = Person("happo", "01230123");
	user1.printStats();
	user2.printStats();

	return 0;
}

