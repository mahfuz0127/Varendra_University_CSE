#include <iostream>
using namespace std;

class Node{
    public:
    int data;
    Node* next;
    
    Node(int value){
        data=value;
        next=nullptr;
    }
};

int main() {
    system("cls");
    Node *head = new Node(5);
    Node *first = new Node(10);
    Node *second = new Node(15);

    head->next =first;
    first->next = second;

    Node *temp = head;

    while(temp){
        cout << temp->data << "->" ;
        temp = temp->next;
    }
    cout << "NULL" << endl;
    
    return 0;
}