#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "enter the array size: " ;
    cin >> n ;

    int array[n];

    cout << "Enter the array elements: " ;

    for(int i=0;i<n;i++) { cin >> array[i] ; }

    int Max = array[0];
    int Min = array[0];

    for(int i=0;i<n;i++){
        if(Max<array[i]){
            Max=array[i];
        }
        if(Min>array[i]){
            Min=array[i];
        }
    }

    cout << "maximum number is :" << Max << endl ;
    cout << "minimum number is :" << Min << endl ;

    return 0;
}