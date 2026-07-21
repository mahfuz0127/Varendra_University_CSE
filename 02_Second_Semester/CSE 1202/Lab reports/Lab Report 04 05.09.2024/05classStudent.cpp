#include <iostream>

using namespace std;

class Student {

private:
  string name, grade;

public:
  Student (string nm = "unknown", string gr = "0") {
    name = nm;
    grade = gr;
    cout << "Name : " << name << "\nGrade : " << grade << endl << endl;
  }
};

int main () {

  cout << endl;
  Student s1, s2 ("Atif", "A+"), s3;

  return 0;
}