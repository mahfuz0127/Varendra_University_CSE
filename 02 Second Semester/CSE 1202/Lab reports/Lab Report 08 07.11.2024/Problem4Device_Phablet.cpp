#include<iostream>
using namespace std;

class Device {
private:
    string deviceName;
public:
    Device() {}
    Device(string nm) : deviceName(nm) {
        cout << "Device Name : " << deviceName << endl;
    }
};

class Phone : virtual public Device {
private:
    int phoneModel;
public:
    void setPhoneModel(int pM) {
        phoneModel = pM;
    }
};

class Tablet : virtual public Device {
private:
    int tabletModel;
public:
    void setTabletModel(int pM) {
        tabletModel = pM;
    }
};

class Phablet : public Phone, public Tablet {
private:
    int phoneModel;
public:
    Phablet(string nm) : Device(nm) {}
    void setPhabletModel(int pM) {
        phoneModel = pM;
    }
};

int main() {
    system("cls");

    Phablet ph1("SAM-11QS");

    return 0;
}