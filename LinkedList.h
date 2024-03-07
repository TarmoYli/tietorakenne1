#pragma once
#ifndef LINKEDLIST
#define LINKEDLIST

#include <iostream>
#include <string>
#include "Person.h"

struct Node
{
    Person Data;
    Node* next;
};

class Linkedlist
{
public:
    Linkedlist();
    ~Linkedlist();
    void printList();
    void pushData(Person newData);
    void appendData(Person newData);
    void deleteByName(Person delData);

private:
    Node* head;
};

#endif // !LINKEDLIST