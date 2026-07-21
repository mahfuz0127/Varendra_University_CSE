// Problem---2

#include <iostream>
using namespace std;

class Student {
private:
    string name, grade;
    int marks[4];
public:
    Student (string name, string grade) : name (name), grade (grade) {}

    void setMarks () {
        for (int i = 0; i < 4; i++) {
            cout << "Enter Marks for Subject " << i + 1 << " : ";
            cin >> marks[i];
        }
    }
    void totalAndAverageMark () {
        int sum = 0;
        float average;
        for (int i = 0; i < 4; i++) {
            sum += marks[i];
        }
        // cout << sum << endl;
        average = float (sum) / 4;

        cout << endl << endl << "Name : " << name << endl << "Grade : " << grade << endl;

        for (int i = 0; i < 4; i++) {
            cout << "Subject " << i + 1 << " mark : " << marks[i] << endl;
        }

        cout << "Average : " << average << endl;
    }
};

int main () {
    system ("cls");

    string name1 = "Rahim";
    string grade = "A+";

    Student s1 (name1, grade);
    s1.setMarks ();
    s1.totalAndAverageMark ();

    return 0;
}