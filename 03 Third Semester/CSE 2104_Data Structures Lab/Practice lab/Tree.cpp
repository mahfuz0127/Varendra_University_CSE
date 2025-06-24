#include <iostream>
using namespace std;

// Node class
class Node {
public:
    int data;
    Node* left;
    Node* right;

    Node(int value) {
        data = value;
        left = NULL;
        right = NULL;
    }
};

// Binary Tree class
class BinaryTree {
public:
    Node* root;

    BinaryTree() {
        root = NULL;
    }

    // Insert value into the tree
    Node* insert(Node* node, int value) {
        if (node == NULL) {
            return new Node(value);
        }

        if (value < node->data) {
            node->left = insert(node->left, value);
        } else {
            node->right = insert(node->right, value);
        }

        return node;
    }

    // Inorder Traversal: Left -> Root -> Right
    void inorder(Node* node) {
        if (node != NULL) {
            inorder(node->left);
            cout << node->data << " ";
            inorder(node->right);
        }
    }

    // Preorder Traversal: Root -> Left -> Right
    void preorder(Node* node) {
        if (node != NULL) {
            cout << node->data << " ";
            preorder(node->left);
            preorder(node->right);
        }
    }

    // Postorder Traversal: Left -> Right -> Root
    void postorder(Node* node) {
        if (node != NULL) {
            postorder(node->left);
            postorder(node->right);
            cout << node->data << " ";
        }
    }
};

int main() {
    BinaryTree tree;
    
    int n; 
    cout << "Enter size:" ;
    cin >> n ;
    
    int arr[n];
    for(int i=0; i<n ; ++i){
        cin >> arr[i];
    }
    
    tree.root = tree.insert(tree.root, arr[0]);
    for(int i=1; i<n ; ++i){
        tree.insert(tree.root, arr[i]);
    }

    // Traversals
    cout << "Inorder Traversal: ";
    tree.inorder(tree.root);
    cout << endl;

    cout << "Preorder Traversal: ";
    tree.preorder(tree.root);
    cout << endl;

    cout << "Postorder Traversal: ";
    tree.postorder(tree.root);
    cout << endl;

    return 0;
}