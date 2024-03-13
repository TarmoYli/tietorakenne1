#include "LinkedList.h"

Linkedlist::Linkedlist() : head(nullptr), current(nullptr) {};

Linkedlist::~Linkedlist()
{
    Node* current = head;
    while (current != nullptr)
    {
        Node* next = current->next;
        delete current;
        current = next;
    }
}

void Linkedlist::printList()
{
    Node* n = head;
    while (n != nullptr)
    {
        std::cout << std::endl;
        n->Data.printStats();
        std::cout << "***" << std::endl;
        n = n->next;
    }
}

void Linkedlist::printOne()
{
//    Node* n = head;
    std::cout << std::endl;
    head->Data.printStats();
    std::cout << "***" << std::endl;
}

void Linkedlist::pushData(Person newData)
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = head;
    head = newNode;
}

void Linkedlist::appendData(Person newData)
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = nullptr;

    if (head == nullptr)
    {
        head = newNode;
        return;
    }

    Node* last = head;
    while (last->next != nullptr)
    {
        last = last->next;
    }

    last->next = newNode;
}

void Linkedlist::deleteByName(std::string delData)
{
    Node* start = head;
    Node* prev = nullptr;

    while (start != nullptr && start->Data.name != delData)
    {
        prev = start;
        start = start->next;
    }
    if (start != nullptr)
    {
        if (prev == nullptr)
        {
            head = start->next;
        }
        else
        {
            prev->next = start->next;
        }
        delete start;
    }
}


