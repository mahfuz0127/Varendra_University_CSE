#include <iostream>
using namespace std;

void CheckArray() {
    int array[5] = { 10, 20, 30, 40, 50 };
    int index;

    try {
        cout << "Enter array index (0 to 4) : ";
        cin >> index;
        if (index > 4) {
            throw "error";
        }
        cout << "At index " << index << " element is " << array[index] << endl;
    }
    catch (...) {
        cout << "Array index out of bounds." << endl;
    }
}

int main() {
    system("cls");

    CheckArray();
    CheckArray();

    return 0;
}