#include "Cylinder.hpp"
#include<iostream>


using namespace std;

Cylinder::Cylinder(){

    Radius=0;
    Height=0;

}


Cylinder::Cylinder(Point p,double R,double h){
origin=p;
Radius=R;
Height=h;

}




void Cylinder::set_Height(double h){

    Height=h;

}


void Cylinder::set_Radius(double R){


    Radius=R;
}


void Cylinder::set_origin(Point P){

    origin=P;
}


ostream& operator<<(ostream& out, const Cylinder &C){
cout<<"cylinder"<<C.Height<<" "<<C.Radius<<" "<<C.origin;
return out;
}
