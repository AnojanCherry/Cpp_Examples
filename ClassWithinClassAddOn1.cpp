#include "ClassWithinClassAddOn2.cpp"

class Rectangle{
    public:
        Rectangle(int newTop, int newLeft, int newBottom, int newRight);
        ~Rectangle(){}
        
        int getTop() const {return top;}
        int getBottom() const {return bottom;}
        int getLeft() const {return left;}
        int getRight() const {return right;}

        Point getUpperLeft() const {return upperLeft;}
        Point getLowerLeft() const {return lowerLeft;}
        Point getUpperRight() const {return upperRight;}
        Point getLowerRight() const {return lowerRight;}

        void setUpperLeft(Point point);
        void setUpperRight(Point point);
        void setLowerLeft(Point point);
        void setLowerRight(Point point);

        void setTop(int newY);
        void setBottom(int newY);
        void setLeft(int newX);
        void setRight(int newX);

        int getArea() const;

    private:
        Point upperLeft, upperRight, lowerLeft, lowerRight;
        int top, bottom, left, right;
};

Rectangle::Rectangle(int newTop, int newLeft, int newBottom, int newRight){
    top = newTop;
    bottom = newBottom;
    left = newLeft;
    right = newRight;

    upperLeft.setXY(left,top);
    upperRight.setXY(right,top);
    lowerLeft.setXY(left,bottom);
    lowerRight.setXY(right,bottom);
}

void Rectangle::setUpperLeft(Point location){
    upperLeft = location;

    upperRight.setY(location.getY());
    lowerLeft.setX(location.getX());

    top = location.getY();
    left = location.getX();
}

void Rectangle::setLowerLeft(Point location){
    lowerLeft = location;

    lowerRight.setY(location.getY());
    upperLeft.setX(location.getX());

    bottom = location.getY();
    left = location.getX();
}

void Rectangle::setLowerRight(Point location){
    lowerRight = location;

    lowerLeft.setY(location.getY());
    upperRight.setX(location.getX());

    bottom = location.getY();
    right = location.getX();
}

void Rectangle::setUpperRight(Point location){
    upperRight = location;

    upperLeft.setY(location.getY());
    lowerRight.setX(location.getX());

    top = location.getY();
    right = location.getX();
}

void Rectangle::setTop(int newTop){
    top = newTop;
    upperLeft.setY(top);
    upperRight.setY(top);
}

void Rectangle::setLeft(int newLeft){
    left = newLeft;
    upperLeft.setX(newLeft);
    lowerLeft.setX(newLeft);
}

void Rectangle::setBottom(int newBottom){
    bottom = newBottom;
    lowerLeft.setY(newBottom);
    lowerRight.setY(newBottom);
}

void Rectangle::setRight(int newRight){
    right = newRight;
    upperRight.setX(newRight);
    lowerRight.setX(newRight);
}

int Rectangle::getArea() const{
    return ((right-left)*(top-bottom));
}