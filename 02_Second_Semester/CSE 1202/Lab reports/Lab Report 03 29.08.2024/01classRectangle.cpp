#include<iostream>
using namespace std;

class Rectangle {
private:
    int length, width;
public:
    void inputData() {
        cout<< "Width Of Rectangle : ";
        cin>>width;
        cout<< "Length Of Rectangle : ";
        cin>>length;
    }
    int CalArea() {
        return (length*width);
    }
    int CalPerim() {
        return (2*(length+width));
    }
};

int main() {

    Rectangle r1;
    r1.inputData();

    cout<<endl<< "Area OF Rectangle : " <<r1.CalArea()<< " sq. units" <<endl;
    cout<<endl<< "Perimeter OF Rectangle : " <<r1.CalPerim()<< " units" <<endl;

    return 0;
}
