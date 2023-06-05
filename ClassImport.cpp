#include <iostream>
#include "ClassImportAddOn.cpp"

int main(){
    Tricycle wichita(10);
    //wichita.setSpeed(10);
    wichita.pedal();
    wichita.setSpeed(6);
    wichita.pedal();

    wichita.brake();
    wichita.brake();
    wichita.brake();

    return 0;
}
