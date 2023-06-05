#include "ClassWithinClassAddOn1.cpp"

int main(){
    Rectangle obj1(0,0,50,80);
    obj1.setUpperLeft(Point(20,100));
    
    std::cout << "Area: "<<obj1.getArea()<<"\n";
}