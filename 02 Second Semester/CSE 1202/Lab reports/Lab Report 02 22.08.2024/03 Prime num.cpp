#include<iostream>
using namespace std;

bool isPrime(int);

int main(){

    int num;

    cout<< "Enter a number : ";
    cin>> num;

    if(isPrime(num)){
        cout<<endl<<num<< " is a prime number"<<endl;
    }
    else{
        cout<<endl<<num<< " is not a prime number"<<endl;
    }

    return 0;
}

bool isPrime(int num){

    bool check = true;
    if(num<2){
        return false;
    } else{
        for(int i=2; i<num/2; i++){
            if(num%i==0){
                return false;
                break;
            }
        }
    }
    if(check){
        return true;
    } else {
        return false;
    }
}
