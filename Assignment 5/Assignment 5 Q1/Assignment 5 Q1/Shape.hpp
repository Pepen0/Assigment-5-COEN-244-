#ifndef Shape_hpp
#define Shape_hpp

#include <stdio.h>
#include <iostream>

using namespace std;

class Shape{
  
public:
    
    Shape();
    virtual ~Shape();
    virtual void print()=0;
    
};

#endif /* Shape_hpp */
