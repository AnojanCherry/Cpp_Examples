#include <iostream>

class SimpleCat{
    public:
        SimpleCat(){std::cout << "Constructor called\n"; itsAge=1;}
        ~SimpleCat(){std::cout << "Destructor called\n";}
        int getAge(){return itsAge;}
    private:
        int itsAge;
};

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


    std::cout << "\nSimple cat Frisky\n";
    SimpleCat frisky;
    std::cout << "Frisky age: " << frisky.getAge() << "\n";

    std::cout << "SimpleCat *Prage = new SimpleCat\n";
    SimpleCat *Prage = new SimpleCat;
    std::cout << "*Prage age: " << (*Prage).getAge() << "\n";

    std::cout << "delete Prage\n";
    delete Prage;

    std::cout << "Bye Bye to frisky\n";
    return 0;
}