#include <iostream>
using namespace std;

int main() {
    int t;
    cout << "Enter number of test cases: ";
    cin >> t;
    while(t--) {
        int n;
        cout << "Enter number of elements: ";
        cin >> n;
        int arr[n];
        cout << "Enter the array elements (0 or 1): ";
        for(int i = 0; i < n; i++) {
            cin >> arr[i];
        }
        
        int min = 0, max = n - 1;
        while(min < max) {
            if(arr[min]==0){
                min++;
            }
            if(arr[max]==1){
                max--;
            }
            if(arr[min]==1 && arr[max]==0){
                swap(arr[min], arr[max]);
            }
        }

        cout << "Sorted array: ";
        for(int i = 0; i < n; i++) {
            cout << arr[i] << " ";
        }
        cout << endl;

        cout << "------------------------" << endl;
        min = 0;
        max = n - 1;
        int mid = -1;
        
        while(min <= max) {
            mid = (min + max) / 2;
            if(arr[mid] == 1) {
                if(mid == 0 || arr[mid - 1] == 0) {
                    break;
                } else {
                    max = mid - 1;
                }
            } else {
                min = mid + 1;
            }
        }
        if(mid != -1 && arr[mid] == 1) {
            cout << "First occurrence of 1 is at index: " << mid << endl;
        } else {
            cout << "1 is not present in the array." << endl;
        }
        cout << "------------------------" << endl;
    }

    return 0;
}