#include<iostream>
using namespace std;

class Complex{

private:
    int real, imaginary;

public:
   Complex(){}

   Complex(int real, int imaginary){
        this->real = real;
        this->imaginary = imaginary;
   }
   Complex addComplex(Complex c1, Complex c2){
        Complex result;
        result.real = c1.real+c2.real;
        result.imaginary = c1.imaginary+c2.imaginary;
        return result;
   }
   void display(){
        cout<<real<< "+" <<imaginary<< "i";
   }
};

int main() {

    Complex com1(10,15),com2(15,12),com3;
    cout<< "Two Complex Numbers : " ;
    com1.display();
    cout<< " & ";
    com2.display();

    com3 = com3.addComplex(com1,com2);
    cout<<endl<<endl<< "Sum of Complex Numbers : ";
    com3.display();
    cout<<endl;

    return 0;
}
