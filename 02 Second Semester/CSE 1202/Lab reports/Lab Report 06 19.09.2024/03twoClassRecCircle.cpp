/* Create two classes Rectangle and Circle, each with a private member representing their area. Write a friend function that compares the areas of the two objects and prints which object has a larger area.*/

#include<iostream>
using namespace std;

class Circle;
class Rectangle;

class Rectangle {
private:
  double length, width, area;

public:
  Rectangle(double w, double h) : width(w), length(h) {
    area = width * length;
  }
  friend void compareArea(Rectangle rect, Circle circle);
};

class Circle {
private:
  double radius, area;

public:
  Circle(double r) : radius(r) {
    area = 3.1416 * radius * radius;
  }
  friend void compareArea(Rectangle rect, Circle circle);
};


int main() {
  system("cls");

  Rectangle rect(10, 5);
  Circle circle(5);

  compareArea(rect, circle);

  return 0;
}

void compareArea(Rectangle rect, Circle circle) {
  cout << endl << "\tRectangle : " << rect.area << "\t& Circle : " << circle.area << endl;
  if (rect.area > circle.area) {
    cout << endl << "\tRectangle has a larger area = " << rect.area << endl;
  }
  else if (rect.area < circle.area) {
    cout << endl << "\tCircle has a larger area = " << circle.area << endl;
  }
  else {
    cout << endl << "\tBoth have the same area = " << endl;
  }
}


