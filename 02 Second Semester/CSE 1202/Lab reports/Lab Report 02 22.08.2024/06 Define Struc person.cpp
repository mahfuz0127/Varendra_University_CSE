#include<iostream>
#include<cstring>

using namespace std;

struct Person{
    int age;
    string name;
    float height;
};

int main(){

    Person pr1;
    cout<< "Enter Person Name : ";
    getline(cin,pr1.name);
    cout<<endl<< "Enter Person Age : ";
    cin>>pr1.age;
    cout<<endl<< "Enter Person Height : ";
    cin>>pr1.height;

    //system("cls");
    cout<<endl<< "-------Person Information-------\n" <<endl;
    cout<< "Person Name : " <<pr1.name<<endl;
    cout<<endl<< "Person Age : " <<pr1.age<<endl;
    cout<<endl<< "Person Height : " <<pr1.height<<endl;

    return 0;
}
