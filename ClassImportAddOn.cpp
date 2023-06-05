#include <iostream>

class Tricycle{
    // By default access control is private
    int model = 110;

    // The following access control is public
    public:
        Tricycle(int initspeed);
        ~Tricycle();
        int getSpeed();
        void setSpeed(int speed);
        void pedal();
        void brake();

    // The following access control is private
    private:
        int speed;
};

// Constructor
Tricycle::Tricycle(int initspeed){
    setSpeed(initspeed);
    std::cout << "Constructed\n";
}

// Destructor
Tricycle::~Tricycle(){
    // Do nothing
    std::cout << "Destructed\n";
}

// Tricycle class> getSpeed function
int Tricycle::getSpeed(){
    return speed;
}

// Tricycle class> setSpeed function
void Tricycle::setSpeed(int newSpeed){
    if (newSpeed >= 0){
        speed = newSpeed;
    }
}

// Tricycle class> pedal function
void Tricycle::pedal(){
    setSpeed(speed+1);
    std::cout << "Pedaling: tricyle speed " << speed << " mph\n";
}

// Tricycle class> brake function
void Tricycle::brake(){
    setSpeed(speed-1);
    std::cout << "Braking:  tricyle speed " << speed << " mph\n";
}