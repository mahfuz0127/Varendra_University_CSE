#include <iostream>
using namespace std;

class Vehicle {
private:
  int model, year;

protected:
  string name;
  int age;
  void Set1 () {
    cout << endl
      << "Enter Year : ";
    cin >> year;
  }

public:
  Vehicle (string nm) : name (nm) {
    cout << name;
  }
};

class Car : private Vehicle {
private:
  int model_2;

protected:
  int age_2;

public:
  Car (string nm) : Vehicle (nm) {}

  void Set () {
    cout << "Calling Set1...";
    Vehicle::Set1 ();
    cout << endl
      << "Enter Name : ";
    cin >> name;
  }
  void Set3 () {
    cout << "\nEnter age_2 : ";
    cin >> age_2;
  }
};

int main () {
  system ("cls");
  Car c1 ("BMW\n");
  c1.Set ();
  c1.Set3 ();

  return 0;
}
