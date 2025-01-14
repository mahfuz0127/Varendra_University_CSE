#include<iostream>
using namespace std;

class Student {
private:
    string name,Class,grade;
    int roll,marks;
public:
    void userinput() {
        cout<< "-----Input Data-----" <<endl;
        cout << "Student Name : " ;
        cin >> name ;
        cout << "Student Class : " ;
        cin >> Class ;
        cout << "Student Roll Number : " ;
        cin >> roll;
        cout << "Student Exam marks : " ;
        cin >> marks ;
    }
    void Grade() {
        if(marks >= 80 && marks < 100)
            grade="A+" ;
        else if(marks >= 75 && marks < 80)
            grade="A";
        else if(marks >= 70 && marks < 75)
            grade="A-" ;
        else if(marks >= 65 && marks < 70)
            grade="B+" ;
        else if(marks >= 60 && marks < 65)
            grade="B" ;
        else if(marks >= 55 && marks < 60)
            grade="B-" ;
        else if(marks >= 50 && marks < 55)
            grade="C+" ;
        else if(marks >= 45 && marks < 50)
            grade="C" ;
        else if(marks >= 40 && marks < 45)
            grade="D" ;
        else
            grade="F" ;
    }
    void display() {
        cout<<endl<< "-----Student Info-----" <<endl;
        cout <<endl<< "Student Name : " << name << endl;
        cout << "Student Class : " << Class << endl;
        cout << "Student Roll Number : " << roll << endl;
        cout << "Student Exam marks : " << marks << endl;
        cout << "Student Grade : " << grade << endl;
    }

};
int main () {
    Student S1;
    S1.userinput();
    S1.Grade();
    S1.display();

    return 0;
}
