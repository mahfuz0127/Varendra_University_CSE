#include<iostream>
using namespace std;

int main(){
    system("cls");
    string s;

    cout << "enter a number of \"*\" line: " ;
    cin >> s;
    
    int n = s.length();
    
    for(int i=1; i<=n ;++i){
        for(int j=1; j<=i; ++j){
            cout << "*" ;
        }
        cout << endl;
    }

    return 0;
}