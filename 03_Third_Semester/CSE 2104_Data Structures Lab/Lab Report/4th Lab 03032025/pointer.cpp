#include <iostream>
using namespace std;

int main() {
    system("cls");
    
    int x = 5 ;
    int *ptr;
    ptr = &x;

    cout << x << endl;
    cout << &x << endl;
    cout << ptr << endl;
    cout << &ptr << endl;
    cout << *ptr << endl;

    return 0;
}