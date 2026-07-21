#include<iostream>
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

    cout << "Enter element in array you wont to delete:" ;
    cin >> x;
    
    for(int i=0; i<n ; i++){
        if(arr[i]==x){
        arr[i]=0;
        }
    }
    
    cout << "Array after deleting element:" ;
    for(int i=0; i<n ; i++){
        cout << arr[i] << " " ;
    }

    return 0;
}