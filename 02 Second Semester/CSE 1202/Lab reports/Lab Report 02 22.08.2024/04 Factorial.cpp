#include<iostream>
using namespace std;

int Factorial(int);

int main(){

    int number;
    cout<< "Enter a positive integer : ";
    cin>>number;

    cout<<endl<< "Factorial of " <<number<< " is : " <<Factorial(number)<<endl;


    return 0;
}


int Factorial(int a){

    if(a<=1){
        return 1;
    } else{
        return a * Factorial(a-1);
    }
}
