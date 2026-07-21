#include <cstdlib>
#include <iostream>

using namespace std;

int main() {
system("cls");
  string dept, name, semest, sec;
  int id;

  cout << endl
       << "Enter your Student Id : ";
  cin >> id;
  cout << endl
       << "Enter your Name : ";
  cin.ignore();
  getline(cin, name);
  cout << endl
       << "Enter your Department : ";
  getline(cin, dept);
  cout << endl
       << "Enter your Semester : ";
  getline(cin, semest);
  cout << endl
       << "Enter your Section : ";
  getline(cin, sec);

  system("cls");
  cout << endl
       << "Name\t\t: " << name << endl;
  cout << endl
       << "Student Id\t: " << id << endl;
  cout << endl
       << "Department\t: " << dept << endl;
  cout << endl
       << "Semester\t: " << semest << endl;
  cout << endl
       << "Section\t\t: " << sec << endl;

  return 0;
}
