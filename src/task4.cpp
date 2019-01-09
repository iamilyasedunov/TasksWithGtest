//
// Created by Илья on 09.01.2019.
//
#include "../include/task4.h"

LinkedList::LinkedList(){
    this->length = 0;
    this->head = NULL;
}

LinkedList::~LinkedList(){
    std::cout << "LIST DELETED";
}

void LinkedList::addHead(int data){
    Node* node = new Node();    //create new elem
    node->prev = 0;             //prev is null, because node is new Head
    node->data = data;          //data
    node->next = this->head;    //next for new head is former head

    if (this->head != 0){       //if list is not empty, node is prev for former head
        this->head->prev = node;
    }
    if (this->length == 0)      //if list is empty, node is head&tail
        this->head = this->tail = node;
    else
        this->head = node;      //else

    this->length++;
}

void LinkedList::addTail(int data) {
    Node* node = new Node();    // create new elem
    node->next = 0;             // next is NULL
    node->data = data;          // data
    node->prev = this->tail;    // prev is former tail

    if (this->tail != 0){       //if list is not empty
        this->tail->next = node;
    }
    if (this->length == 0)      //if list is empty, then it is head&tail
        this->head = this->tail = node;
    else                        //else node is new tail
        this->tail = node;

    this->length++;
}
void LinkedList::insert(int data){
    addTail(data);
}
bool LinkedList::insert(int pos, int data){
    if(pos < 1 || pos > this->length + 1) {     //check correction of position
        std::cout << "Incorrect position"<<std::endl;
        return false;
    }

    if (pos == this->length+1){     //check begin position or end position of list
        addTail(data);
        return true;
    }
    else if (pos == 1){
        addHead(data);
        return true;
    }

    Node * Ins = this->head;
    for(int i = 1; i < pos; i++)
        Ins = Ins->next;

    Node * prevIns = Ins->prev;
    Node * temp = new Node();
    temp->data = data;

    if (prevIns != 0 && this->length != 1)
        prevIns->next = temp;

    temp->next = Ins;
    temp->prev = prevIns;
    Ins->prev = temp;

    this->length++;
}


void LinkedList::print(){
    Node* head = this->head;
    int i = 1;
    while(head){
        std::cout<<head->data<<" ";
        head = head->next;
        i++;
    }
}