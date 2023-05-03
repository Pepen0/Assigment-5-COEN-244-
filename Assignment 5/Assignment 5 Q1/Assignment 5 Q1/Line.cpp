#include "Line.hpp"

#include <iostream>


using namespace std;


Line::Line(){
    

    
}

void Line::setLine(Point p1,Point p2){
this->P1=p1;
this->P2=p2;

}

Point Line::getLinepoint1(){
    return P1;

}


Point Line::getLinepoint2(){
    return P2;
}

ostream& operator<<(ostream & out,const Line & L){
out<<"Line: "<<L.P1<<" "<<L.P2;
return out;

}
