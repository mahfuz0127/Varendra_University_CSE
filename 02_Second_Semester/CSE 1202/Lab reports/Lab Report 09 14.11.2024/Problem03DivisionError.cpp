#include <iostream>
using namespace std;

void Division() {
    float a, b;
    cout << "Enter first and second number ";
    cin >> a >> b;
    try {
        if (b == 0) {
            throw 0;
        }
        cout << "Division : " << (a / b) << endl;
    }
    catch (int e) {
        cout << "Division by 0 is not allowed" << endl;
    }
}

int main() {
    system("cls");

    Division();
    Division();

    return 0;
}