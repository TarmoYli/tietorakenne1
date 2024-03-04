#pragma once
#include <iostream>
#include <string>

struct Node
{
    std::string Data;
    Node* next;
};

class Linkedlist
{
public:
    Linkedlist();
    ~Linkedlist();
    void printList();
    void pushData(std::string newData);
    void appendData(std::string newData);
    void deleteData(std::string delData);

private:
    Node* head;
};