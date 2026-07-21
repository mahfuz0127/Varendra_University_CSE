#include <iostream>
#include<time.h>
using namespace std;

int main() {
    srand(time(0));
    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    int arr[n];
    cout << "Best case scenario: " << endl;
    for (int i = 0; i < n; i++) {
        arr[i]=i;
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Worst case scenario: " << endl;
    for (int i = n - 1; i >= 0; i--) {
        arr[i] = i;
        cout << arr[i] << " ";
    }

    cout << endl;
    cout << "Average case scenario: " << endl;
    for (int i = 0; i < n; i++) {
        arr[i] = rand() % n;
        cout << arr[i] << " ";
    }

    cout << endl;

    return 0;
}