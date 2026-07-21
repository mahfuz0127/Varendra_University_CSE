#include<iostream>

using namespace std;

int findMax(int, int, int);

int main(){

    int num1, num2, num3;
    cout<< "Enter First Number : ";
    cin>>num1;
    cout<<endl<< "Enter Second Number : ";
    cin>>num2;
    cout<<endl<< "Enter Third Number : ";
    cin>>num3;

    cout<<endl<< "Maximum Number between three number : " <<findMax(num1,num2,num3)<<endl;

    return 0;
}

int findMax(int a, int b, int c){

    if(a>b && a>c){
        return a;
    } else if(b>c && b>a){
        return b;
    } else if(c>a && c>b){
        return c;
    }

    return 1;
}
