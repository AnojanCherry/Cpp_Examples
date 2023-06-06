#include <iostream>

class SimpleCat{
    public:
        SimpleCat(){itsAge = 2;}
        ~SimpleCat(){}
        int getAge() const {return itsAge;}
        void setAge(int newAge) {itsAge = newAge;}

    private:
        int itsAge;
};

int main(){
    SimpleCat *Frisky = new SimpleCat;
    std::cout << "Frisky is " << Frisky -> getAge() << " years old\n";

    Frisky -> setAge(Frisky->getAge()+1);
    std::cout << "Frisky is " << Frisky -> getAge() << " years old\n";

    delete Frisky;
    return 0;
}