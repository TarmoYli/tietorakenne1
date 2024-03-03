#include "LinkedList.h"

Linkedlist::Linkedlist() : head(nullptr) {}

Linkedlist::~Linkedlist() {}

void Linkedlist::printList()
{
    Node* n = head;
    while (n != NULL) {
        std::cout << n->Data << std::endl;
        n = n->next;
    }
}

void Linkedlist::pushData(std::string newData)
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = head;
    head = newNode;
}

void Linkedlist::appendData(std::string newData)
{
    Node* newNode = new Node();
    newNode->Data = newData;
    newNode->next = NULL;

    if (head == NULL) {
        head = newNode;
        return;
    }

    Node* lastmem = head;
    while (lastmem->next != NULL) {
        lastmem = lastmem->next;
    }

    lastmem->next = newNode;
}
