#include <iostream>

using namespace std;

class Rectangle {

private:
  double length, width;

public:
  Rectangle() {
    length = width = 1;
    cout << "Area of Rectangle : " << (length * width) << endl;
  }
  Rectangle(double length, double width) {
    this->length = length;
    this->width = width;
    cout << "Area of Rectangle : " << (length * width) << "\n\n";
  }
  ~Rectangle() {
    cout << "Destructor is called..." << "\n\n";
  }
};

int main() {

  cout << "\n\n";
  Rectangle r1, r2(10, 20);

  return 0;
}
