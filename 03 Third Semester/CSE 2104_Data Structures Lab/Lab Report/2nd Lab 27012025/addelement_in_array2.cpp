// #include <iostream>
// using namespace std;

// int main() {
//     int n,x;

//     cout << "Enter array size:" ;
//     cin >> n;

//     int arr[n];

//     cout << "Enter array elements:" ;
//     for(int i=0; i<n ; i++){
//         cin >> arr[i] ;
//     }

//     cout << "Enter the number of element in array you wont to increase:" ;
//     cin >> x ;
    
//     cout << "Enter the new elements:" ;
//     for(int i=n; i<n+x ; i++){
//         cin >> arr[i] ;
//     }

//     cout << "Array after adding element:" ;
//     for(int i=0; i<n+x ; i++){
//         cout << arr[i] << " " ;
//     }

//     return 0;
// }
#include <iostream>
using namespace std;

int main() {
    int m;
    cout << "Enter the Maximum array element:" ;
    cin >> m;

    int n,x;

    cout << "Enter array initial array size:" ;
    cin >> n;

    int arr[m];

    cout << "Enter array elements:" ;
    for(int i=0; i<n ; i++){
        cin >> arr[i] ;
    }

    cout << "Enter the number of element in array you wont to increase:" ;
    cin >> x ;
    
    cout << "Enter the new elements:" ;
    for(int i=n; i<n+x ; i++){
        cin >> arr[i] ;
    }

    cout << "Array after adding element:" ;
    for(int i=0; i<n+x ; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}