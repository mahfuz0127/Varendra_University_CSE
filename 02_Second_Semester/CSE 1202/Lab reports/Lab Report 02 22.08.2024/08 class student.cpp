#include<iostream>
#include<cstring>

using namespace std;

class Student{
private:
    string name;
    int rollNumber, marks;

public:
    void inputData(){
        cout<< "Enter Student Name : ";
        cin>>name;
        cout<<endl<< "Enter Student Roll : ";
        cin>>rollNumber;
        cout<<endl<< "Enter Student marks : ";
        cin>>marks;
    }
    void display(){
        cout<<endl<< "Student Name : " <<name<<endl;
        cout<<endl<< "Student Roll : " <<rollNumber<<endl;
        cout<<endl<< "Student marks : " <<marks<<endl;
    }
    void pass(){
        if(marks>=40){
            cout<<endl<< "Result : Passed" <<endl;
        } else{
            cout<<endl<< "Result : Failed" <<endl;
        }
    }

};

int main(){

   Student s1;
   s1.inputData();
   cout<<endl<< "\n-------Student Details-------"<<endl;
   s1.display();
   s1.pass();

    return 0;
}


