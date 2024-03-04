
#include <iostream>
#include "LinkedList.h"


int main()
{
    Linkedlist lista = Linkedlist();
    lista.pushData("1 push eka");
    lista.appendData("2 append eka");
    lista.pushData("3 push toka");
    lista.appendData("4 append toka");
    lista.pushData("5 push kolmas");
    lista.deleteData("2 append eka");
    lista.printList();
}

