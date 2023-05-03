#ifndef Point_hpp
#define Point_hpp

#include <stdio.h>
#include <iostream>
#include "Shape.hpp"

using namespace std;

class Point :public Shape{
    
public:
   Point();
   Point(double,double);


   void setXcoord(double);
   void setYcoord(double);
   double getx();
   double gety();
   void print();
   friend ostream &operator<<( ostream &,const Point &);
   
private:
   double y_coord;
    
   double x_coord;
    
};


#endif /* Point_hpp */
