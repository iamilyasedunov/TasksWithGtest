//
// Created by Илья on 30.12.2018.
//
#include "../include/headers.h"


class Node
{
public:
    Node *prev;
    Node* next;
    int data;
};

class LinkedList
{
public:
    int length;
    Node* head,* tail;

    LinkedList();
    ~LinkedList();
    void addHead(int data);
    void addTail(int data);
    bool insert(int pos, int data);
    void insert(int data);
    void print();
};

