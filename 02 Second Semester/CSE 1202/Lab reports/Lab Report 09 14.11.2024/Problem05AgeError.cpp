#include <iostream>
using namespace std;

void ValidAge() {
    try {
        int age;
        cout << "Enter age (0-150) : ";
        cin >> age;
        if (age >= 150 || age < 0) {
            throw 0;
        }
        cout << "Entered age is : " << age << endl;
    }
    catch (int e) {
        cout << "Invalid age entered " << endl;
    }
}

int main() {
    system("cls");

    ValidAge();
    ValidAge();

    return 0;
}