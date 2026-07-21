#include<iostream>
using namespace std;

int main(){
    system("cls");
    int array[5];

    cout << "enter 5 array number : " ;
    
    for(int i=0; i<5 ;++i){
        cin >> array[i] ;
    }

    int target;
    cout << "target= " ;
    cin >> target;

    for (int i = 0; i < 5; ++i) {
        for (int j = i + 1; j < 5; ++j) {
            if (array[i] + array[j] == target) {
                cout << "[" << i << ", " << j << "]" << endl;
                return 0; 
            }
        }
    }

    cout << "not match" ;

    return 0;
}