#include<iostream>
#include <algorithm>

using namespace std;

class FindMaxNumber {
private:
  int a, b;
  float p, q;
  int x, y, z;
public:
  float findMax(float n1, float n2) {
    p = n1;
    q = n2;

    return max(p, q);
  }

  int findMax(int n1, int n2) {
    a = n1;
    b = n2;

    return max(a, b);
  }

  int findMax(int n1, int n2, int n3) {
    x = n1;
    y = n2;
    z = n3;

    return max(x, max(y, z));
  }
};

int main() {
  system("cls");

  FindMaxNumber obj1;

  cout << "Maximum of two Integers :" << obj1.findMax(11, 22) << endl;
  cout << "Maximum of two floating-point numbers :" << obj1.findMax(11.16f, 325.41) << endl;
  cout << "Maximum of three Integers :" << obj1.findMax(12, 25, 30) << endl;

  return 0;
}
