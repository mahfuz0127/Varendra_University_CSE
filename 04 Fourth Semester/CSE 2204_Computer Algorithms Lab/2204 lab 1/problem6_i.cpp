#include<iostream>
using namespace std;

int main(){
    system("cls");
    int array[5];

    cout << "enter 5 array number : " ;
    
    for(int i=0; i<5 ;++i){
        cin >> array[i] ;
    }

    for (int i = 0; i < 5; ++i) {
        if(array[i]==0){
            array[i]=array[i+1];
            cout << array[i] ;
        }
    }

    return 0;
}