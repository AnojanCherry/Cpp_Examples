#include <iostream>

class Tricycle{
    public:
        Tricycle(int iniSpeed);
        ~Tricycle();

        // inline Implementation Example 1 outside class
        void setSpeed(int speed);

        // inline Implementation example 2 inside class
        int getSpeed() const { return speed;}

        // inline Implementation example 3 inside class
        void pedal(){
            setSpeed(speed+1);
            std::cout << "Pedaling: "<<getSpeed()<<" mph\n";
        }

        // inline Implementation example 3 inside class
        void brake(){
            setSpeed(speed-1);
            std::cout << "Braking:  "<<getSpeed()<<" mph\n";
        }
    
    private:
        int speed;
};

Tricycle:: Tricycle(int iniSpeed){
    setSpeed(iniSpeed);
}

Tricycle::~Tricycle(){}

inline void Tricycle::setSpeed(int newSpeed){
    if (newSpeed>=0){
        speed = newSpeed;
    }
}

int main(){
    Tricycle wichita(15);
    wichita.pedal();
    wichita.pedal();
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    wichita.pedal();
    wichita.pedal();
    wichita.brake();
    return 0;
}