#include <iostream>#define PI 3.1416

using namespace std;float areaOfCircle(float);
int main(){

    float rad;

    cout << "Enter Radius of Circle : ";
    cin >> rad;    cout << endl << "Area of Circle : ";    cout << areaOfCircle(rad) << " sqr unit" << endl;
    return 0;
}
float areaOfCircle(float radius){    return (PI*radius*radius);}