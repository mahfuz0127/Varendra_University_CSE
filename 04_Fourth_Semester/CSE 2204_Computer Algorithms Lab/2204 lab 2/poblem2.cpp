/*2. Search in a Rotated Sorted Array:
Given a sorted array that is rotated at some 
pivot and a target value x, determine the index 
of x. If x is not found, return -1.
Example 1:
Input: array = [3, 4, 5, 1, 2]; x = 2
Output: 4*/

#include<iostream>
using namespace std;

int find(int array[],int n, int x){
    int low = 0, high = n - 1;

    while (low <= high) {
        int mid = low + (high - low) / 2;
        if (array[mid] == x) return mid;
        if(array[low] <=array[mid]) {
            if (array[low] <= x && x < array[mid]){
                high = mid - 1;
            }
            else{
                low = mid + 1;
            }
        }
        else{
            if (array[mid] < x && x <= array[high]){
                
                low = mid + 1;
            }
            else{

                high = mid - 1;
            }
        }
    }
    return -1;
}

int main(){
    system("cls");

    cout << "Enter a non-negative integer number n(that is the size of array) : ";
    int n;
    cin >> n;

    cout << "Enter the elements of array: ";
    int array[n];
    for(int i=0; i<n ; ++i){
        cin >> array[i];
    }
    cout << "Enter the target value x: ";
    int x;
    cin >> x;

    int result = find(array,n , x);

    cout << "The index of x in the rotated sorted array is: " << result << endl;
    return 0;
}