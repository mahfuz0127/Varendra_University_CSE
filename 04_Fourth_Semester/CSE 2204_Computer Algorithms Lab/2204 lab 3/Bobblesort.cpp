#include <iostream>
using namespace std;

int main() {
    system("cls");
    int n,comparisons = 0, swaps = 0;
    cout << "Enter the number of elements: ";
    cin >> n;
    
    int arr[n];
    cout << "Enter the elements: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    for(int i = 0; i < n - 1; i++) {
        for(int j = 0; j < n - i - 1; j++) {
            comparisons++;
            if(arr[j] > arr[j + 1]) {
                swaps++;
                swap(arr[j], arr[j + 1]);
            }
        }
    }

    cout << "Sorted array: ";
    for(int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    cout << "Total comparisons: " << comparisons << endl;
    cout << "Total swaps: " << swaps << endl;
    return 0;
}