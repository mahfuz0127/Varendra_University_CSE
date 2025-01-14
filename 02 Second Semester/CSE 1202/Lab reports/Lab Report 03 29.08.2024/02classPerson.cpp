#include<iostream>
#include<cstring>

using namespace std;

class Person {

private:
    int age;
    string name, country;
public:
    void setValue() {
        cout<< "Enter Person Name : ";
        getline(cin,name);
        cout<<endl<< "Enter Person Age : ";
        cin>>age;
        cout<<endl<< "Enter Person Country : ";
        cin>>country;
    }
    void getValue() {
        cout<<endl<< "-------Person Information-------\n" <<endl;
        cout<< "Person Name : " <<name<<endl;
        cout<<endl<< "Person Age : " <<age<<endl;
        cout<<endl<< "Person Country : " <<country<<endl;

    }
};

int main() {
    Person pr1;
    pr1.setValue();
    pr1.getValue();

    return 0;
}
