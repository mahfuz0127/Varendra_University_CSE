#include <iostream>
using namespace std;

int main() {
    int n;
    int sum=0;

    cout << "enter the array size: " ;
    cin >> n ;

    int array[n];

    cout << "Enter the array elements: " ;

    for(int i=0;i<n;i++) {
        cin >> array[i] ;
        sum = sum + array[i] ;
    }

    cout << "Sum is = " << sum ;

    return 0;
}