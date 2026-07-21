#include<iostream>
using namespace std;

class Person {
private:
  int age;
  string name;
public:
  void SetAge() {
    cout << "Age setted for person ";
  }
  void SetName() {
    cout << "Enter name : ";
    cin >> name;
  }
};

class Employee : public Person {

public:
  void SetAge() {
    cout << "Age setted for Employee ";
  }
};

class Student : public Person {
public:
  void SetAge() {
    cout << "Age setted for Student ";
  }
  void showName() {
    cout << "Name setted for student " << endl;
  }
};

int main() {
  system("cls");
  Employee e1;
  Student s1;
  e1.SetAge();
  cout << endl;
  s1.SetName();
  s1.showName();

  return 0;
}
