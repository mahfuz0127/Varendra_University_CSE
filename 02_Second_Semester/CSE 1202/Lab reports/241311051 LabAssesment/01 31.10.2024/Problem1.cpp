#include <iostream>
using namespace std;

class Circle {
private:
    float radius;
public:
    Circle (float radius) : radius (radius) { }
    void calculateArea () {
        cout << "Circle Area : " << ((3.1416) * radius * radius);
    }
    void calculateCircumference () {
        cout << endl << "Circumference of Cirlce : " << (2 * (3.1416) * radius) << endl << endl;
    }
};

int main () {
    system ("cls");

    Circle c1 (5) , c2 (8) , c3 (30);
    cout << "Circle 1 :" << endl;
    c1.calculateArea ();
    c1.calculateCircumference ();
    cout << "Circle 2 :" << endl;
    c2.calculateArea ();
    c2.calculateCircumference ();
    cout << "Circle 3 :" << endl;
    c3.calculateArea ();
    c3.calculateCircumference ();

    return 0;
}