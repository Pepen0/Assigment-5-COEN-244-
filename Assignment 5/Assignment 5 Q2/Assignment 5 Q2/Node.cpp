#include "Node.hpp"


//constructors and destructors

Node::Node()
{
    
    set_Value(0);
    set_Next(nullptr);
    cout<<" Node was built "<<endl;
    
}
Node::Node(int Value )
{
    set_Value(Value);
    set_Next(nullptr);
}

Node::~Node()
{
    
    cout<<" Node destroyed "<<endl;
    
}

//setters

void Node::set_Value(int Value )
{
    this->Value=Value;
}
void Node::set_Next(Node* x)
{
    Next=x;
}

//getters

int Node::get_Value()
{
    return Value;
}
Node* Node::get_Next()
{
    return Next;
}



