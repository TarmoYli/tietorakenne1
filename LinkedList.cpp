#include "LinkedList.h"

Linkedlist::Linkedlist() : head(nullptr), current(nullptr),previous(nullptr) {};

Linkedlist::~Linkedlist()
{
    Node* current = head;
    while (current != nullptr)      // hajotetaan kaikki!
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void Linkedlist::printList()
{
    Node* printter = head;                         // tehd��n xtra ptr koska ei haluta muuttaa headia
    while (printter != nullptr)                    // tulostellaan kunnes t�rm�t��n nullptr
    {
        std::cout << std::endl;
        printter->Data.printStats();
        std::cout << "***" << std::endl;            // eri hieno t�hdistys erottamaan data
        printter = printter->next;
    } 
}

void Linkedlist::printOne()
{
    std::cout << std::endl;                         // tyhj� rivi
    head->Data.printStats();
    previous = head;
    current = head->next;
    std::cout << "***" << std::endl;
}
void Linkedlist::printNext()
{
    std::cout << std::endl;
    current->Data.printStats();
    if (current->next != nullptr)
    {
        previous = current;
        current = current->next;
    }
    else                                            // asetetaan current headiin koska mentiin viimeiseen
    {
        std::cout << "Current is now at the beginning." << std::endl;
        current = head;
    }

    std::cout << "***" << std::endl;        
}

void Linkedlist::deleteCurrent()
{
    if (current == nullptr)                 // jos ei olla miss��n
    {
        return;
    }
    if (current == head)                    // jos ollaan headissa niin siirret��n my�s headia
    {
        head = current->next;
        std::cout << current->Data.name << " poistettu" << std::endl;
        delete current;
        current = head;
    }
    else                                    // jos ollaan jossain muualla niin k�ytet��n previous muuttujaa
    {
        previous->next = current->next;
        std::cout << current->Data.name << " poistettu" << std::endl;
        delete current;
        current = previous->next;
    }
}
void Linkedlist::pushData(Person newData)
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = head;
    head = newNode;
}

void Linkedlist::appendData(Person newData)     // listan loppuun lis�t��n node
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = nullptr;

    if (head == nullptr)                        // jos listassa ei ole mit��n viel�
    {
        head = newNode;
        return;
    }

    Node* last = head;
    while (last->next != nullptr)               // liikutaan kunnes t�rm�t��n nullptr.
    {
        last = last->next;
    }
    last->next = newNode;
}

void Linkedlist::deleteByName(std::string delData)  // poistetaan nimell�
{
    Node* start = head;                             // aloitetaan headista
    Node* prev = nullptr;

    while (start != nullptr && start->Data.name != delData)     // loopataan kunnes joko start on nullptr eli ollaan lopussa tai data.name on poistettava
    {                                                           
        prev = start;
        start = start->next;
    }
    if (start != nullptr)                                       // jos start ei ole nullptr (eli tuli osuma haetulle poistolle)
    {
        if (prev == nullptr)                                    // tarkistetaan onko prev nullptr koska silloin ollaan headissa ja delData on osunut heti eik� prev:lle ole asetettu mit��n
        {
            head = head->next;                                  // head osoittaa nyt seuraavaan solmuun.
        }
        else                                                    // jos prev:ll� ON joku arvo(osoite)
        {
            prev->next = start->next;                           // prev:n nextiin asetetaan osuman saaneen noden next eli sit� seuraavan noden osoite.... voi olla nullptr.
        }
        delete start;                                           // ja nyt voidaan poistaa osuman saanut node
    }
}