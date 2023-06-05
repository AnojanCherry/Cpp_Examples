#include <iostream>

int main(){
    unsigned short shortvar = 5;
    unsigned long longvar = 65535;
    long sVar = -65535;

    std::cout << "shortvar: "<< shortvar;
    std::cout << "\tAdress of said variable: \t"<<&shortvar<<"\n";

    std::cout << "longvar: "<< longvar;
    std::cout << "\tAdress of said variable: \t"<<&longvar<<"\n";

    std::cout << "sVar: "<< sVar;
    std::cout << "\tAdress of said variable: \t"<<&sVar<<"\n\n";

    // creating a null pointer (an adress pointer variable)
    unsigned short *pointer1 = NULL;
    pointer1 = &shortvar;

    // Retrive stored pointer value
    std::cout << "pointer1: "<< *pointer1;
    std::cout << "\tAdress of said variable: \t"<<pointer1<<"\n";

    std::cout << "shortvar: "<< shortvar;
    std::cout << "\tAdress of said variable: \t"<<&shortvar<<"\n";
}