#include <iostream>

int main(){
    // char yum[] = {"A","n","o","j","a","n","\0"};
    //std::cout << yum<<"\n";
    char yum2[] = "Anojan is the best person in this context? but then i do have my flaws...";
    std::cout<<yum2<<"\n"<<(sizeof(yum2)/sizeof(yum2[0]))<<"\n";

    /*
    // User input WITH NO space for the following
    std::cout << "Enter a string, less than the above context & No spaces: ";
    std::cin >> yum2;
    std::cout<<yum2<<"\n";
    */

    /*
    // User input WITH space for the following
    std::cout << "Enter a string, less than the above context & Spaces allowed: ";
    std::cin.getline(yum2,74);
    std::cout<<yum2<<"\n";
    */

    // User input but TERMINATES ui at space
    std::cout << "Enter a string, less than the above context & Spaces allowed: ";
    std::cin.getline(yum2,74,"q");
    std::cout<<yum2<<"\n";
}