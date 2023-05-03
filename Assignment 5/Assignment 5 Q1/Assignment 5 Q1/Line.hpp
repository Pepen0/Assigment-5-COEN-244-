#ifndef Line_hpp
#define Line_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"
#include"Point.hpp"

using namespace std;

class Line:public Shape{
    
public:
Line();
Line(Point,Point);

    void setLine(Point p1,Point p2);
void setpoint1(Point);
void setpoint2(Point);
Point getLinepoint1();
Point getLinepoint2();
void print();

friend ostream &operator<<(ostream &,const Line &);

private:

Point P1;
Point P2;


};

#endif /* Line_hpp */
