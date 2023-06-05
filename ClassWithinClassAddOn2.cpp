#include <iostream>

class Point{
    public:
        Point() {}
        Point(int newX, int newY) {x = newX; y = newY;}
        void setX(int newX) {x = newX;}
        void setY(int newY) {y = newY;}
        void setXY(int newX, int newY) {x = newX; y = newY;}
        int getX() const {return x;}
        int getY() const {return y;}

    private:
        int x, y;
};