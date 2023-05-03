//
//  Node.hpp
//  Assignment 5 Q2
//
//  Created by Penoelo Thibeaud on 2022-12-05.
//

#ifndef Node_hpp
#define Node_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Node{
    
public:
    
    Node();
    Node(int);
    ~Node();
    
    void set_Value(int);
    void set_Next(Node*);
    
    int get_Value();
    Node* get_Next();
    
private:
    
    int Value;
    Node* Next;
    
};



#endif /* Node_hpp */
