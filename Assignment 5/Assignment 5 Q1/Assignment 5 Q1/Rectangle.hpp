#ifndef Rectangle_hpp
#define Rectangle_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"
#include "Line.hpp"

using namespace std;

class Rectangle :public Shape{
    
public:

Rectangle();
Rectangle(Line,Line);

void setLine(Line,Line);

Line GetHeigth();
Line GetBase();
void print();

friend ostream &operator<<(ostream &,const Rectangle &);

//add print
private:

Line Heigth;
Line base;




};

#endif /* Rectangle_hpp */
