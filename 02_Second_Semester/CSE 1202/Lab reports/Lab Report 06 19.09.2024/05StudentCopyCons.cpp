/* Define a class Student with private members for name, roll number, and marks. Implement a copy constructor to copy the details of one student object to another. Write a destructor to display a message when the object is destroyed. Test this by creating a Student object and copying it to another.*/

#include<iostream>
using namespace std;

class Student {
private:
    string name;
    int roll,marks;
public:
    Student(string nm, int Roll, int Marks) : name(nm), roll(Roll), marks(Marks) {}
    Student(Student &obj1){
        name = obj1.name;
        roll = obj1.roll;
        marks = obj1.marks;
    }
    void display(){
        cout<< "Name : " <<name<< " Roll : " <<roll<< " Marks : " <<marks<<endl;
    }

};
int main () {

    Student obj("Atif",241311051,90);
    Student obj2 = obj;

    obj.display();
    obj2.display();

    return 0;
}
