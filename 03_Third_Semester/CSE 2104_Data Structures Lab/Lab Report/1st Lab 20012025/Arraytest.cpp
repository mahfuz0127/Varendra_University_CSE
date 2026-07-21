#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the array size: " ;
    cin >> n ;

    int array[n];

    cout << "Enter the array elements: " ;

    for(int i=0;i<n;i++){
        cin >> array[i] ;
    }

    for(int i=0;i<n;i++){
        cout << array[i]  << " ";
    }

    return 0;
}