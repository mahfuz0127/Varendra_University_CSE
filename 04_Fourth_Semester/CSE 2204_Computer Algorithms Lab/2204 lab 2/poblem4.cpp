#include<iostream>
using namespace std;

int find(){
    int array[5];

    cout << "Enetr a array " ;
    for(int i=0; i<5 ; ++i){
        cin >> array[i];
    }

    int x;
    cout << "Enter a number x= " ;
    cin >> x;

    for(int i=0; i<5 ; ++i){
        if(array[i]==x){
            return i;
        }
    }
    return -1;
}

int main(){
    system("cls");

    cout << find();
    return 0;
}