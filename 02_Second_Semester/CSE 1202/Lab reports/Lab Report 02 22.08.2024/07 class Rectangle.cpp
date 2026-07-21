#include<iostream>

using namespace std;

class Rectangle{
private:
    int length, width;
public:
    void inputData(){
        cout<< "Enter Width Of Rectangle : ";
        cin>>width;
        cout<<endl<< "Enter Length Of Rectangle : ";
        cin>>length;
    }
    int CalArea(){
        return (length*width);
    }
    int CalPerimeter(){
        return (2*(length+width));
    }
    void display(){
        cout<<endl<< "Length of Rectangle : " <<length<<endl;
        cout<< "Width of Rectangle : " <<width<<endl;
    }

};

int main(){

   Rectangle r1;
   r1.inputData();
   cout<<endl<<endl<< "Area OF Rectangle : " <<r1.CalArea()<< " square units." <<endl;
   cout<< "Perimeter OF Rectangle : " <<r1.CalPerimeter()<< " units." <<endl;
   r1.display();

    return 0;
}
