#include<iostream>
using namespace std;

class Vehicle {
public:
    virtual void horn() {
        cout << "Generic vehicle horn" << endl;
    }
};

class Car : public Vehicle {
public:
    void horn() {
        cout << "Car horn: Beep Beep!" << endl;
    }
};

class Truck : public Vehicle {
public:
    void horn() {
        cout << "Truck horn: Honk Honk!" << endl;
    }
};

int main() {
    system("cls");

    Vehicle* car;
    Vehicle* truck;

    Car car1Object;
    car = &car1Object;
    Truck tr1Object;
    truck = &tr1Object;

    car->horn();
    truck->horn();

    return 0;
}