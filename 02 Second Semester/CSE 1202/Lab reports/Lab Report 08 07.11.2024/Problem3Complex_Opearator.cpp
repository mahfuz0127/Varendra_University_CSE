#include <iostream>
using namespace std;
class Complex {
private:
  float real;
  float imag;
public:
  Complex() : real(0), imag(0) {}
  Complex(int r, int i) : real(r), imag(i) {}

  Complex operator + (Complex c) {
    Complex temp;
    temp.real = real + c.real;
    temp.imag = imag + c.imag;
    return temp;
  }

  Complex operator - (Complex c) {
    Complex temp;
    temp.real = real - c.real;
    temp.imag = imag - c.imag;
    return temp;
  }

  Complex operator * (Complex c) {
    Complex temp;
    temp.real = real * c.real;
    temp.imag = imag * c.imag;
    return temp;
  }

  void output() {
    cout << "Complex number: " << real << "+" << imag << "i" << endl;
  }
};
int main() {
  system("cls");

  Complex c1(15, 11), c2(9, 7);
  Complex additionR, subtractionR, multiplicationR;

  additionR = c1 + c2;
  subtractionR = c1 - c2;
  multiplicationR = c1 * c2;

  additionR.output();
  subtractionR.output();
  multiplicationR.output();

  return 0;
}
