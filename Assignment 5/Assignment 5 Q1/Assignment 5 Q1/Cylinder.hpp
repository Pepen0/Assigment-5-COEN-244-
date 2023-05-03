#ifndef Cylinder_hpp
#define Cylinder_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"
#include "Point.hpp"

using namespace std;

class Cylinder:public Shape{
    
public:

Cylinder();
Cylinder(Point,double,double);

void set_Radius(double);

void set_Height(double);

void set_origin(Point);


friend ostream &operator<<(ostream &,const Cylinder &);

Point getpoint();
void print();



private:
Point origin;
double Radius;
double Height;
    
};

#endif /* Cylinder_hpp */
