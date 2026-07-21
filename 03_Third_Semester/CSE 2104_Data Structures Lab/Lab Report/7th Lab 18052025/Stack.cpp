#include <iostream>
using namespace std;

class Stack{
    public:
    int top,capasity;
    int* stk;

    Stack(int size){
        top = -1;
        stk = new int[size];
        capasity = size;
    }

    void push(int value){
        if(top >= capasity-1){
            cout << "overflow" << endl;
            return;
        }else {
            stk[++top]=value;
        }
    }

    void pop(){
        if(top < 0){
            cout << "Underflow." << endl;
        } else {
            --top;
        }
    }

    void display(){
        if(top < 0){
            cout << "Underflow." << endl;
            return;
        } else {
            for(int i=0; i<=top ;++i){
                cout << stk[i] << "  " ;
            }
            cout << endl;
        }
    }

    ~Stack(){
        delete[] stk;
    }
};

int main() {
    system("cls");
    int size;
    cout << "Enter the size of a Stack: " ;
    cin >> size;

    Stack s(size);
    s.push(10);
    s.display();
    s.push(20);
    s.display();
    s.push(30);
    s.display();
    s.pop();
    s.display();
    s.push(40);
    s.display();
    s.pop();
    s.display();
    
    return 0;
}