#include<iostream>
using namespace std;

int main(){
    system("cls");
    int n;

    cout << "enter a number to take their sum: " ;
    cin >> n;
    
    int sum=0;
    cout << " the nutaral nubers are: " ;
    for(int i=0; i<=n ;++i){
        cout << i ;
        if(i<n){
            cout << ", " ;
        }
        sum+=i;
    }

    cout << "\nThe sum of these number = " << sum ;

    return 0;
}