#include <iostream>

int main(){
    int inta;
    int &rInta = inta;

    inta = 243;
    std::cout << "inta: " << inta << "\n";
    std::cout << "rInta: " << rInta << "\n\n";

    rInta = 233343;
    std::cout << "inta: " << inta << "\n";
    std::cout << "rInta: " << rInta << "\n\n";

    std::cout << "&inta: " << &inta << "\n";
    std::cout << "&rInta: " << &rInta << "\n";

    return 0;
}