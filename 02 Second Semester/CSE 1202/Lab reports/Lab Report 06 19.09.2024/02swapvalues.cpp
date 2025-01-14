/*Write a class SwapValues with two private integer members. Implement a friend function that swaps the values of the two private members and displays the swapped values.*/

#include <iostream>
using namespace std;

class SwapValue {

private:
  int a;
  int b;
  friend void swapV(SwapValue obj);

public:
  SwapValue(int x, int y) : a(x), b(y) {}
};

void swapV(SwapValue obj) {

  cout << endl << "\tBefore Swap : a = " << obj.a << ", b = " << obj.b << endl;
  int temp = obj.a;
  obj.a = obj.b;
  obj.b = temp;

  cout << endl << "\tAfter Swap : a = " << obj.a << ", b = " << obj.b << endl;
}

int main() {
  system("cls");
  
  SwapValue sv(5, 10);
  swapV(sv);

  return 0;
}
