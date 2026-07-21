#include <iostream>
#include <climits>
using namespace std;

int main() {
    system("cls");
    int n;
    cout << "Enter a number: ";
    cin >> n;

    int array[n];
    cout << "Enter " << n << " elements: ";
    for (int i = 0; i < n; i++) {
        cin >> array[i];
    }

    int max_sum = INT_MIN;
    int sum = 0;
    for (int i = 0; i < n-1; i++) {
        sum += array[i];
        if (sum > max_sum) {
            max_sum = sum;
        }
    }
    cout << "Maximum sum of pairs: " << max_sum << endl;

    return 0;
}