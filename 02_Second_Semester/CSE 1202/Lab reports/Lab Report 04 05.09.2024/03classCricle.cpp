#include<iostream>
#define PI 3.1416
using namespace std;

class Circle{

private:
   double radius;

public:
    Circle(double ra) {
       radius = ra;
    }
    void display(){
        cout<<endl<< "\tWhen radius "<<radius<< " Area of Circle is " <<(PI*radius*radius)<<endl;
    }
};

int main() {

   double ra;
   cout<<endl<< "\tEnter Radius of Circle : ";
   cin>>ra;
   Circle c1(ra);
   c1.display();

    return 0;
}
