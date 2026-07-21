#include <iostream>
using namespace std;

class Node{
    public :
    int data;
    Node* next;

    Node(int value){
        data= value;
        next = nullptr;
    }
};

Node* creatLinkList(int arr[],int size){
    Node* head = nullptr;
    Node* temp = nullptr;
    Node* current = nullptr;

    for(int i=0;i<size ;++i){
        temp = new Node(arr[i]);

        if (head == nullptr){
            head = temp ;
            current = temp;
        }else {
            current->next= temp;
            current = current->next;
        }
    }

    return head;
}

int main() {
    int size;
    cout << "Enter thr number of element:" ;
    cin >> size;

    int* a = new int(size);
    cout << "Enter " << size << " integer:" ;
    for(int i=0; i<size ; ++i ){
        cin >> a[i];
    }

    Node* head = creatLinkList(a, size);
    Node* current = head;

    while(current != nullptr){
        cout << current->data << "->" ;
        current = current->next;
    }

    cout << "NULL" << endl;

    current =head;
    while (current != nullptr){
        Node* next = current->next;
        delete current;
        current= next;
    }

    delete[] a;

    return 0;
}