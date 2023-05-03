
#include <iostream>
#include <ostream>
#include "LinkedList.hpp"


ostream& operator<<( ostream& result, LinkedList* const x )
{
    Node* Current_node;
    Current_node=new Node();
    
    cout <<" The list : ";

    

    Current_node=x->get_Head();

    while (Current_node!=nullptr) {

        result<<" "<<Current_node->get_Value()<<" ,";

        Current_node=Current_node->get_Next();
    }
    return result;
}

int main() {
    
    
    LinkedList * L1;
    L1=new LinkedList();
    
    
    //add those 5 elements in this order to the list
    
    cout<<" --- We will test the insert an element function --- "<<endl;
    L1->insert_element(5, 44);
    cout<<L1<<endl;
    
    cout<<" --- We will test the add an element function for 5 nodes --- "<<endl;
    L1->add_element(50);
    L1->add_element(60);
    L1->add_element(45);
    L1->add_element(56);
    L1->add_element(68);
    cout<<L1<<endl;
    
    
    cout<<" --- We will test the insert an element function for an negative position --- "<<endl;
    L1->insert_element(-3, 400); //insert 400 at the position at the position -3 which cause an error
    cout<<L1<<endl;
    
    cout<<" --- We will test the delete an element function for the position 5 --- "<<endl;
    L1->delete_element(5); //remove the element at the position 5
    cout<<L1<<endl;
    
   
    
    delete L1;
    
    
    return 0;
}
