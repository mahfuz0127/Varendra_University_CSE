
#include <iostream>
 using namespace std;

 int main() {
    int n;
    cout << "enter the array size: " ;
    cin >> n ;

    int array[n];

    cout << "Enter the array elements: " ;

    for(int i=0;i<n;i++) { cin >> array[i] ; }

    int odd[n];
    int even[n];

    int oddtemp=0;
    int eventemp=0;

    for(int i=0; i<n ;i++){
        if(array[i]%2==0){
            even[eventemp]=array[i];
            eventemp++;
        }else{
            odd[oddtemp]=array[i];
            oddtemp++;
        }
    }

    cout << "\nOdd number: " ;
    for(int i=0; i<oddtemp ;i++){cout <<  odd[i] << " " ;}

    cout << "\nEven number: " ;
    for(int i=0; i<eventemp ;i++){cout << even[i] << " " ;}

    return 0;
 }