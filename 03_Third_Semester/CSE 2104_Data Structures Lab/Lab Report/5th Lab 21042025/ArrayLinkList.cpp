#include <iostream>
using namespace std;

struct node{
    int data;
    struct node *next;
};

int main() {
    system("cls");

    int array[10];

    for (int i = 0; i < 10; i++){
        s
    }
    

    struct node *a = NULL ;
    struct node *b = NULL ;
    struct node *c = NULL ;

    a = (struct node*) malloc(sizeof(struct node));
    b = (struct node*) malloc(sizeof(struct node));
    c = (struct node*) malloc(sizeof(struct node));

    a->data=10;
    b->data=20;
    c->data=30;

    a->next=b;
    b->next=c;
    c->next=NULL;

    while (a!=NULL){
        cout << a->data << "->" << endl;
        a=a->next;
    }
    cout << "NULL" << endl;
    

    return 0;
}