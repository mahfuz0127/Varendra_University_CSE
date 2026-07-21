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

Node* creation(int n){
    int value;
    cout << "Enter the element no.1 : " ; 
    cin >> value;
    Node* head = new Node(value);
    Node* temp = head;

    for (int i = 2; i <= n; i++){
        cout << "Enter the element no." << i << " : "; 
        cin >> value;
        temp->next = new Node(value);
        temp = temp->next;
    }

    return head;
}

bool is_found(Node* head,int element){
    Node* temp = head;

    while(temp){
        if(element==temp->data){
            return true;
        }
        temp = temp->next;
    }
    return false;
}

int main() {
    system("cls");

    int n;
    cout << "enter the number of element: " ;
    cin >> n ;

    Node* head = creation(n);
    Node* temp = head; 

    while(temp){
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << "NULL" << endl;

    int element;
    cout << "Enter the search element : " ;
    cin >> element;

    if(is_found(head,element)){
        cout << element << " is Found." << endl;
    } else {
        cout << element << " is not Found. " << endl;
    }
    
    return 0;
}