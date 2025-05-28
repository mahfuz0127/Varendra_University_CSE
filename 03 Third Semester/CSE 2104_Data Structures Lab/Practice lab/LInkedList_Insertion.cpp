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
    if (position == 1) {
        return insertAtBeginning(head, value);
    }

    Node* newNode = new Node(value);
    Node* temp = head;
    for (int i = 1; i < position - 1 && temp != nullptr; i++) {
        temp = temp->next;
    }

    if (temp == nullptr) {
        cout << "Position out of bounds. Inserting at the end." << endl;
        return insertAtEnd(head, value);
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

int main() {
    system("cls");

    int n;
    cout << "Enter the number of elements: ";
    cin >> n;

    Node* head = creation(n);

    cout << "Initial Linked List: ";
    printList(head);

    int choice;
    cout << "\nWhere do you want to insert?\n";
    cout << "1. At beginning\n2. At end\n3. At specific position\n";
    cout << "Enter your choice: ";
    cin >> choice;

    int value, position;
    switch (choice) {
    case 1:
        cout << "Enter value to insert at beginning: ";
        cin >> value;
        head = insertAtBeginning(head, value);
        break;
    case 2:
        cout << "Enter value to insert at end: ";
        cin >> value;
        head = insertAtEnd(head, value);
        break;
    case 3:
        cout << "Enter value and position to insert: ";
        cin >> value >> position;
        head = insertAtPosition(head, value, position);
        break;
    default:
        cout << "Invalid choice!" << endl;
    }

    cout << "\nUpdated Linked List: ";
    printList(head);

    return 0;
}
