#include <iostream>
using namespace std;

class Node {
public:
    int data;
    Node* next;

    Node(int value) {
        data = value;
        next = nullptr;
    }
};

Node* creation(int n) {
    int value;
    cout << "Enter the elements: ";
    cin >> value;
    Node* head = new Node(value);
    Node* temp = head;

    for (int i = 2; i <= n; i++) {
        cin >> value;
        temp->next = new Node(value);
        temp = temp->next;
    }

    return head;
}

Node* insertAtBeginning(Node* head, int value) {
    Node* newNode = new Node(value);
    newNode->next = head;
    return newNode;
}

Node* insertAtEnd(Node* head, int value) {
    Node* newNode = new Node(value);
    if (head == nullptr) return newNode;

    Node* temp = head;
    while (temp->next != nullptr) {
        temp = temp->next;
    }
    temp->next = newNode;
    return head;
}

Node* insertAtPosition(Node* head, int value, int position) {
    Node* newNode = new Node(value);
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }
    
    newNode->next = temp->next;
    temp->next = newNode;
    return head;
}

void printList(Node* head) {
    Node* temp = head;
    while (temp) {
        cout << temp->data << "->";
        temp = temp->next;
    }
    cout << "NULL" << endl;
}

Node* insertion_Process(Node* head,int n){
    int value, position,choice;
    cout << "Enter the position you wont to insert:";
    cin >> position;

    cout << "Enter value to insert: ";
    cin >> value;

    if(position==1) choice=1;
    else if (position>n) choice=2;
    else if (position>1 && position<=n) choice=3;

    switch (choice) {
    case 1:
        head = insertAtBeginning(head, value);
        break;
    case 2:
        head = insertAtEnd(head, value);
        break;
    case 3:
        head = insertAtPosition(head, value, position);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\nUpdated Linked List: ";
    printList(head);

    return head;
}

int main() {

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node* head = creation(n);

    cout << "Initial Linked List: ";
    printList(head);

    char c ='y';

    Node* nextNode = head;

    while(c == 'y'){
        nextNode = insertion_Process(nextNode,n);
        cout << "Do you wont to insert an element again?(y/n):   ";
        cin >> c ;
    }

    return 0;
}