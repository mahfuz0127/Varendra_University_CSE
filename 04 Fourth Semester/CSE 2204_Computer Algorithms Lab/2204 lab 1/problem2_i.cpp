#include<iostream>
using namespace std;

int main(){
    system("cls");
    int n;

    cout << "enter a number of line: " ;
    cin >> n;
    
    for(int i=1; i<=n ;++i){
        for(int j=1; j<=i; ++j){
            cout << i;
        }
        cout << endl;
    }

    return 0;
}