#include <iostream>
using namespace std;

int main() {
    int size;
    
    cout << "Enter how many numbers you want to input: ";
    cin >> size;
    
    int arr[size];

    cout << "Enter " << size << " numbers:\n";
    for (int i = 0; i < size; i++) {
        cin >> arr[i];
    }

    bool found = false;

    for (int i = 0; i < size - 1; i++) {
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                cout << "First duplicate number is: " << arr[i] << endl;
                found = true;
                break;
            }
        }
        if (found) break;
    }

    if (!found) {
        cout << "No duplicates found." << endl;
    }

    return 0;
}


