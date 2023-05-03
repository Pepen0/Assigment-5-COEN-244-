#include "Rectangle.hpp"
#include<iostream>

Rectangle::Rectangle(){
   

}

Rectangle::Rectangle(Line o,Line x){
    Heigth=o;
    base=x;

}


void Rectangle::setLine(Line L1,Line L2){
Heigth=L1;
base=L2;

}


Line Rectangle::GetHeigth(){
    return Heigth;
}

Line Rectangle::GetBase()
{

    return base;

}

ostream& operator<<(ostream & out,const Rectangle &R){
cout<<"Rectangle :"<<R.base<<" "<<R.Heigth;

return out;

}
