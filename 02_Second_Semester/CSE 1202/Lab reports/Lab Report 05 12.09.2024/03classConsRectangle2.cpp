#include<iostream>
using namespace std;

class Rectangle{

    double length, width;

public:
    Rectangle(double length, double width){
        this->length = length;
        this->width = width;
    }
    double area(){
        double area = (length*width);
        return area;
    }
    void compareArea(Rectangle r){
        int compare = this->area() - r.area();
        cout<<endl<< "\tDifference Between two Area (" <<this->area()<< " - " <<r.area()<< ") = "<<compare<<endl;
    }
};

int main() {

    Rectangle r1(20,25), r2(15,12);
    r1.compareArea(r2);

    return 0;
}
