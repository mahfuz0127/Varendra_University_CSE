#include<iostream>
using namespace std;

int sum(int, int);

int main(){

    int a, b;

    cout<< "Enter First Number : ";
    cin>>a;
    cout<<endl<< "Enter Second Number : ";
    cin>>b;

    cout<<endl<< "Sum of " <<a<< " + " <<b<< " = " <<sum(a,b)<<endl;

    return 0;
}

int sum(int a, int b){

    return (a+b);
}
