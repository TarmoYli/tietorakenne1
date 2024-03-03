
#include <iostream>
#include "LinkedList.h"


int main()
{
    Linkedlist lista = Linkedlist();
    lista.pushData("eka");
    lista.appendData("viimeinen");
    lista.pushData("toinen");
    lista.pushData("kolmas");
    lista.printList();

}

