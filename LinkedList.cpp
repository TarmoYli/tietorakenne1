#include "LinkedList.h"

Linkedlist::Linkedlist() : head(nullptr) {};

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

    Node* lastmem = head;
    while (lastmem->next != nullptr)
    {
        lastmem = lastmem->next;
    }

    lastmem->next = newNode;
}

void Linkedlist::deleteByName(Person delData)
{
    Node* start = head;
    Node* prev = nullptr;

    while (start != nullptr && start->Data.name != delData.name)
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
