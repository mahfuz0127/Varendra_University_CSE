#include<iostream>
using namespace std;

class Car{

private:
    int year;
    string color, model;

public:
    void setInput(){
        cout<< "Enter Car's Color : ";
        getline(cin,color);
        cout<< "Enter Car's Model : ";
        getline(cin,model);
        cout<< "Enter Car's Release Year : ";
        cin>>year;
    }
    void display(){
        cout<< "Car's Color is " <<color<<endl;
        cout<< "Car's Model is " <<model<<endl;
        cout<< "Car's Release Year is " <<year<<endl;
    }
    void check(){
        if(year<1998){
            cout<< "The Car, Model : " <<model<< " is VINATGE " <<endl;
        }
        else{
            cout<< "The Car, Model : " <<model<< " is NEW Model " <<endl;
        }
    }

};

int main() {

    Car car1;
    car1.setInput();
    cout<<endl;
    car1.display();
    car1.check();


    return 0;
}
