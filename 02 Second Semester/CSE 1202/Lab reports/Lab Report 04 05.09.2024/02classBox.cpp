#include<iostream>
using namespace std;

class Box{

private:
    double length, width, height;

public:
    Box(double ln=0, double wd=0, double hei=0) {
        length = ln;
        width = wd;
        height = hei;
    }
    void display(){
        cout<<endl<< "Box's Length : " <<length<<endl;
        cout<< "Box's Width : " <<width<<endl;
        cout<< "Box's Height : " <<height<<endl;
    }
};

int main() {

    Box b1, b2(25,12,30);
    cout<<endl<<"Value When Constructor Initialized" <<endl;
    b1.display();
    cout<<endl<<"Value When Parameter Passed" <<endl;
    b2.display();

    return 0;
}
