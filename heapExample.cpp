#include <iostream>

int main(){
    int lvar = 5;
    int *plocal = &lvar;
    int *pheap = new int;
    if (pheap == NULL){
        std::cout << "Error! No memory for pHeap!!";
        return 1;
    }

    *pheap = 7;

    std::cout << "Local variable: " << lvar << "\n";
    std::cout << "*plocal: " << *plocal << "\n";
    std::cout << "*pheap " << *pheap << "\n\n";

    std::cout << "pheap " << pheap << "\n";
    std::cout << "*pheap " << *pheap << "\n";
    std::cout << "&pheap " << &pheap << "\n\n";
    delete pheap;
    std::cout << "pheap " << pheap << "\n";
    std::cout << "*pheap " << *pheap << "\n";
    std::cout << "&pheap " << &pheap << "\n";
    return 0;
}