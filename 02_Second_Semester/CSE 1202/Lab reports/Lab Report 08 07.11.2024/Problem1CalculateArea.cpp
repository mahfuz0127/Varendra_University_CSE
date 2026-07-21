#include <iostream>
using namespace std;

class CalculationArea {
private:
  float radius;
  int length, width;
  double base, height;
public:
  void areaCalculation(float r) {
    radius = r;
    cout << "Area of Circle : " << (3.1416 * (radius * radius)) << endl;
  }
  void areaCalculation(int l, int w) {
    length = l;
    width = w;
    cout << "Area of Rectangle : " << (length * width) << endl;
  }
  void areaCalculation(double b, double h) {
    base = b;
    height = h;
    cout << "Area of Triangle : " << (0.5 * (height * base)) << endl;
  }

};

int main() {
  system("cls");

  CalculationArea cir, rect, tria;

  cir.areaCalculation(5);
  rect.areaCalculation(20, 10);
  tria.areaCalculation(15.5, 12.2);

  return 0;
}
