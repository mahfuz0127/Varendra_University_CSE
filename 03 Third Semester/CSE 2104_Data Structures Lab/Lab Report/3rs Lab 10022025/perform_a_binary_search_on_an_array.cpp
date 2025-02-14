#include<iostream>
using namespace std;

int main() {
    int size,elem;

    cout << "Enter array size:" ;
    cin >> size;

    int arr[size];

    cout << "Enter array elements:" ;
    for(int i=0; i<size ; i++){
        cin >> arr[i] ;
    }

    cout << "Enter the element in array you wont to search:" ;
    cin >> elem;
    
    for(int i=0; i<size ; i++){
        if(elem==arr[i]) cout << elem << " is found in index [" << i << "] " << endl;
    }

    return 0;
}