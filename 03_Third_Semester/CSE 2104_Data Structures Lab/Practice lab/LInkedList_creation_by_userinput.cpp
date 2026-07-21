#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;

    Node(int value){
        data = value;
        next = nullptr;
    }
};

int main() {
    system("cls");

    int n;
    cout << "enter the number of element: " ;
    cin >> n ;

    int value;
    cin >> value;
    Node* head = new Node(value);
    Node* temp = head;

    for (int i = 2; i <= n; i++){
        cin >> value;
        temp->next = new Node(value);
        temp = temp->next;
    }
    
    temp = head; 
    while(temp){
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    
    return 0;
}