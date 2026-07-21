#include<iostream>
using namespace std;

int power(int,int);


int main(){

    int base, exponent;
    cout<< "Enter Base Number : ";
    cin>>base;
    cout<<endl<< "Enter Exponent Number : ";
    cin>>exponent;

    cout<<endl<<base<< " Power of " <<exponent<< " = " <<power(base,exponent)<<endl;


    return 0;
}

int power(int base, int exponent){
    int result=1;
    for(int i=0; i<exponent; i++){
        result = base*result;
    }
    return result;
}
