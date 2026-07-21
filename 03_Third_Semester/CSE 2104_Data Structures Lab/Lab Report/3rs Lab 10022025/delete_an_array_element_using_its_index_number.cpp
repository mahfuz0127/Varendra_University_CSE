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

    cout << "Enter the index number in array you wont to delete:" ;
    cin >> x;
    
    for(int i=x; i<n ; i++){
        if(x>=n) break; cout << "index out of bound" << endl;
        arr[i]=arr[i+1];
    }
    
    cout << "Array after delete index:" ;
    for(int i=0; i<n-1 ; i++){
        cout << arr[i] << " " ;
    }



    return 0;
}