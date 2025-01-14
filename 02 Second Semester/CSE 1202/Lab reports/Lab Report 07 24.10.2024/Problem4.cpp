#include<iostream>
using namespace std;

class Base {
protected:
    int age;
    string name;
public:

};

class Derived : private Base {

public:
    void setValue(int ag, string nm) {
        age = ag;
        name = nm;
    }
    void display() {
        cout << "Name : " << name << endl << "Age : " << age << endl;
    }
};

int main() {
    system("cls");
    Derived d1;
    d1.setValue(20, "Atif");
    d1.display();

    return 0;
}
