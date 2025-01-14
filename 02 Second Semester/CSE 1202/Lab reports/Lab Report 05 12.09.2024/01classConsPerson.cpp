#include <iostream>

using namespace std;

class Person {

private:
  string name;
  int age;

public:
  Person(string name, int age) {
    this->name = name;
    this->age = age;
    cout << endl
         << "Name : " << name << "\nAge : " << age << endl;
  }
  ~Person() {
    cout << "\nDestructor Called..." << endl
         << endl;
  }
};

int main() {

  Person p1("Atif", 20);

  return 0;
}
