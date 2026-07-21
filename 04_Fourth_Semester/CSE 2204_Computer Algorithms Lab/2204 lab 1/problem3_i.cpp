#include<iostream>
using namespace std;

void print_Matrix(int m,int n){
    int matrix[m][n];

    for(int i=0; i<m ;++i){
        for(int j=0; j<n; ++j){
            cout << "(" << i << "," << j << ")  " ;
        }
        cout << endl;
    }
}

int main(){
    system("cls");
    int m;
    int n;

    cout << "enter a matrix m*n using space : " ;
    cin >> m >> n;

    print_Matrix(m,n);

    return 0;
}