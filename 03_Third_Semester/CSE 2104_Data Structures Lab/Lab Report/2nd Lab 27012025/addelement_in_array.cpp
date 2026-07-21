#include <iostream>
using namespace std;

int main() {
    int n,x;

    cout << "Enter array size:" ;
    cin >> n;

    int arr[n];

    cout << "Enter array elements:" ;
    for(int i=0; i<n ; i++){
        cin >> arr[i] ;
    }

    cout << "Enter a new element in array:" ;
    cin >> x;
    arr[n] = x;

    cout << "Array after adding element:" ;
    for(int i=0; i<=n ; i++){
        cout << arr[i] << " " ;
    }



    return 0;
}