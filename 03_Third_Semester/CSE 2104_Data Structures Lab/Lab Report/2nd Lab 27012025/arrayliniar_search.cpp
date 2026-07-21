#include<iostream>
using namespace std;

int main() {
    int m,x;
    cout << "Enter the array size :" ;
    cin >> m;

    int arr[m];

    cout << "Enter array elements:" ;
    for(int i=0; i<m ; i++){
        cin >> arr[i] ;
    }

    cout << "array elementsare :" ;
    for(int i=0; i<m ; i++){
        cout << arr[i] << " " ;
    }

    cout << endl << "Enter the element you wont to search:" ;
    cin >> x ;

    int loc;
    
    for(int i=0;i<m;i++){
        if(arr[i]==x){
            loc = i;
            break;
        }
    }

    if(loc){
        cout << x << " is found in : Array[" << loc << "]" << endl ;
    }else{
        cout << "not founded." << endl ;
    }

    return 0;
}