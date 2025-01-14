#include<iostream>
using namespace std;

class Point{

private:
   double x,y;
public:
    Point(){
        double X=0, Y=0;
        cout<<endl<< "\n\t(x,y) : " << "(" <<X<< "," <<Y<<")"<<endl;
    }
    Point(double X, double Y){
        x = X;
        y = Y;
        cout<< "\n\t(x,y) : " << "(" <<x<< "," <<y <<")"<<endl;
    }
};

int main() {

    Point p1, p2(10,15);

    return 0;
}

