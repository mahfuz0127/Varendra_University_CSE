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

Node* createLinkedList(int arr[], int size) {
    Node* head = nullptr;
    Node* temp = nullptr;
    Node* current = nullptr;

    for (int i = 0; i < size; ++i) {
        temp = new Node(arr[i]);

        if (head == nullptr) {
            head = temp;
            current = temp;
        } else {
            current->next = temp;
            current = current->next;
        }
    }

    return head;
}

//Search Function
bool search(Node* head, int key) {
    Node* current = head;
    while (current != nullptr) {
        if (current->data == key)
            return true;
        current = current->next;
    }
    return false;
}

int main() {

    int size;
    cout << "Enter the number of elements: ";
    cin >> size;

    int* a = new int[size];

    cout << "Enter " << size << " integers: ";
    for (int i = 0; i < size; ++i) {
        cin >> a[i];
    }

    Node* head = createLinkedList(a, size);

    //Display the list
    cout << "Linked List: ";
    Node* current = head;
    while (current != nullptr) {
        cout << current->data << " -> ";
        current = current->next;
    }
    cout << "NULL" << endl;

    //Ask user for a value to search
    int key;
    cout << "Enter value to search: ";
    cin >> key;

    if (search(head, key))
        cout << key << " is found in the list!" << endl;
    else
        cout << key << " is not found in the list." << endl;

    //Free memory
    current = head;
    while (current != nullptr) {
        Node* next = current->next;
        delete current;
        current = next;
    }

    delete[] a;

    return 0;
}
