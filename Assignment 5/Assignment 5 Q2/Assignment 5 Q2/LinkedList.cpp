#include "LinkedList.hpp"
#include "cstring"

LinkedList::LinkedList()
{
    set_Head(nullptr);
    set_Tail(nullptr);
}
LinkedList::LinkedList(Node* New_node)
{
    set_Head(New_node);
    set_Tail(New_node);
}
LinkedList::~LinkedList()
{
    while (Head!=nullptr) {
        
        delete_element(1);
        
    }
    delete Head;
    delete Tail;
    
    cout<<" List was destroyed"<<endl;
}

void LinkedList::set_Head(Node* New_node)
{
    Head=New_node;
}
void LinkedList::set_Tail(Node* New_node)
{
    Tail=New_node;
}



Node* const LinkedList::get_Head ()
{
    return Head;
}
Node* LinkedList::get_Tail()
{
    return Tail;
}


void LinkedList::add_element(int value)
{
    Node* New_node;
    New_node = new Node();
 
    if (Head==nullptr&&Tail==nullptr) {
        New_node->set_Value(value);
        set_Head(New_node);
        set_Tail(New_node);
    }else
    {
        New_node->set_Value(value);
        Tail->set_Next(New_node);
        set_Tail(New_node);
    }
}
void LinkedList::insert_element(int position,int Value)
{
    
    while (position<0) {
        
        try {
            
            if (position<0) {
                throw " Enter positive integer for the position ";
            }
            
        } catch (char const* x) {
            
            cout<<x<<endl;
            cin>>position;
            
        }
        
    }
    
    
    
    
    
    Node* search;
    search = new Node(Value);
    
    if (Head==nullptr&&Tail==nullptr) {
        
        Head=search;
        Tail=search;
        
        cout<<" The Element "<<Value<<" is the first one to be added \n so it's position will be 1 by default unstead of "<<position<<endl;
        
    }
    else if (position==0) {
        
        search->set_Next(Head);
        Head=search;
        
    }
    else if(position==1)
    {
        
        search->set_Next(Head->get_Next());
        Head->set_Next(search);
        
    }
    else{
        
        Node* spot;
        spot = new Node();
        spot=Head;
        
        for (int i=2; i<=position; i++) {
            
            spot=spot->get_Next();
            
        }
        
        search->set_Next(spot->get_Next());
        spot->set_Next(search);
        
        
    }
    
}

void LinkedList::delete_element(int position)
{
    Node* spot;
    spot = new Node();
    
    Node* spot1;
    spot1 = new Node();
    
    if(position==1)
    {
    
        spot=Head;
        Head=Head->get_Next();
        spot=nullptr;
        
    }else{
    
        spot=Head;
        
        for (int i=2; i<position; i++) {
            
            spot=spot->get_Next();
            
        }
        
        spot1=spot->get_Next();
        spot->set_Next(spot->get_Next()->get_Next());
        
        
        
    }
    cout<<" Element was deleted "<<endl;
    
}
int LinkedList::get_value(int position)
{
    Node* Search;
    Search = new Node();
    Search=Head;
    
    if(position==1)
    {
        return Search->get_Value();
    }
    for (int i=2; i<position; i++) {
       
        if (Search->get_Next()==nullptr) {
            
            cout<<" Max position reahced "<<endl;
            return 0;
            
        }
        Search=Search->get_Next();

    }
    return Search->get_Value();
    
}
