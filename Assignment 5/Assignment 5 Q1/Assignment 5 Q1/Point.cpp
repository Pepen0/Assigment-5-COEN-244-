#include "Point.hpp"
#include<iostream>

using namespace std;


Point::Point(){
    x_coord=0;
    y_coord=0;
}

Point::Point(double x, double y){
x_coord=x;
y_coord=y;
}

void Point::setXcoord(double x){
    x_coord=x;
    
}

void Point::setYcoord( double y ){
    y_coord=y;
}

double Point::getx(){
    return x_coord;
}

double Point::gety(){

    return y_coord;

}

void Point::print()
{
cout<<"POINT:"<<endl;
cout<<x_coord<<endl;
cout<<y_coord<<endl;



}

ostream& operator<<(ostream& out,const Point& p){
out<<"Point"<<p.x_coord<<" "<<p.y_coord;
return out;
}
