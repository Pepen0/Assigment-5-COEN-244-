//  Assignment 5 Q2


#ifndef LinkedList_hpp
#define LinkedList_hpp

#include <stdio.h>
#include <iostream>
#include "Node.hpp"

using namespace std;

class LinkedList{
    
public:
    
    LinkedList();
    LinkedList(Node*);
    ~LinkedList();
    
    void set_Head(Node*);
    void set_Tail(Node*);
    
    void add_element(int);
    void insert_element(int ,int Value);
    void delete_element(int);
    int get_value(int);
    

    
    Node* const get_Head ();
    Node* get_Tail();
    
private:
    Node * Head;
    Node * Tail;
};

#endif /* LinkedList_hpp */
