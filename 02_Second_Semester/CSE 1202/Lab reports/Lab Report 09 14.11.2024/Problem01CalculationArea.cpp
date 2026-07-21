#include<iostream>
using namespace std;

class Shape {
public:
    virtual double CalculateArea() {}
};

class Circle : public Shape {

private:
    double radius;

public:
    Circle(double rd) : radius(rd) {}

    double CalculateArea() {
        return (3.1416 * (radius * radius));
    }
};

class Rectangle : public Shape {

private:
    int base, height;

public:
    Rectangle(int a, int b) : base(a), height(b) {}

    double CalculateArea() {
        return (base * height);
    }
};

int main() {
    system("cls");

    Shape* circle;
    Shape* rectangle;

    Circle cr1(5);
    circle = &cr1;

    Rectangle r1(10, 20);
    rectangle = &r1;

    cout << "Circle Area : " << circle->CalculateArea() << endl;
    cout << "Rectangle Area : " << rectangle->CalculateArea() << endl;

    return 0;
}