// Problem---

#include <iostream>
using namespace std;

class Product {
private:
    int productID;
    string productName;
    float price;

public:
    Product (int proID, string proName, float prPrice) : productID (proID), productName (proName), price (prPrice) {
        cout << "Product Name : " << productName << endl;
        cout << "Product ID : " << productID << endl;
        cout << "Product Price : " << price << endl;
    }

    void CalculateDisCount () {
        float discount = 0.3;
        float disprice = price - (price * discount);
        cout << "Discounted Price : " << disprice << endl;
    }

    ~Product () {
        cout << endl << "Destructor Called" << endl;
    }
};

int main () {
    system ("cls");

    Product pr1 (1001, "Shoes", 100);
    pr1.CalculateDisCount ();
    cout << endl;

    Product pr2 (1002, "Brush", 550);
    pr2.CalculateDisCount ();
    cout << endl;

    Product pr3 (1003, "Soup", 330);
    pr3.CalculateDisCount ();


    return 0;
}