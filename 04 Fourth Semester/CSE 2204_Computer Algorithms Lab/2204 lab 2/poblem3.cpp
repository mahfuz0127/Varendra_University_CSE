/*3. Finding Minimum in a Rotated Sorted 
Array: Given a rotated sorted array where all 
elements are distinct, find the minimum 
element.
Example 1:
Input: array = [3, 4, 5, 1, 2]
Output: 1
*/

#include <iostream>
using namespace std;

int find(int arr[], int size){
    int low = 0, high = size - 1;
    while (low < high) {
        int mid = low + (high - low) / 2;
        if (arr[mid] > arr[high])
            low = mid + 1;
        else
            high = mid;
    }
    return arr[low];
}

int main() {
    system("cls");

    int size;
    cout << "Enter size of rotated sorted array: ";
    cin >> size;
    int arr[size];

    cout << "Enter " << size << " elements: ";
    for (int i = 0; i < size; i++) cin >> arr[i];

    int minVal = find(arr, size);
    cout << "Minimum element in the array is: " << minVal << endl;
    return 0;
}