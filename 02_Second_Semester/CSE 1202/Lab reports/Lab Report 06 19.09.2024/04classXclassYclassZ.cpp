/* Write three classes classX, classY, classZ, each containing a private integer member.Implement a single friend function that has access to the private members of all these three classes and finds the maximum value among them and prints it*/

#include <iostream>
using namespace std;

class classX;
class classY;
class classZ;

void findMax(classX x, classY y, classZ z);

class classX {
private:
  int valueX;

public:
  classX(int v) : valueX(v) {}
  friend void findMax(classX x, classY y, classZ z);
};

class classY {
private:
  int valueY;

public:
  classY(int v) : valueY(v) {}
  friend void findMax(classX x, classY y, classZ z);
};

class classZ {
private:
  int valueZ;

public:
  classZ(int v) : valueZ(v) {}
  friend void findMax(classX x, classY y, classZ z);
};

void findMax(classX x, classY y, classZ z) {
  int maxVal = x.valueX;
  if (y.valueY > maxVal) {
    maxVal = y.valueY;
  }

  if (z.valueZ > maxVal) {
    maxVal = z.valueZ;
  }

  cout << "The maximum value is: " << maxVal << endl;
}

int main() {
  classX objX(10);
  classY objY(20);
  classZ objZ(15);

  findMax(objX, objY, objZ);
  return 0;
}