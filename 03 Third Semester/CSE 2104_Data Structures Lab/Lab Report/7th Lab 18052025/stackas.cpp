#include <iostream>
using namespace std;

const int MAX = 100;

int stack[MAX];
int top = -1;

void push(int value) {
    if (top >= MAX - 1) {
        cout << "Stack Overflow" << endl;
        return;
    }
    stack[++top] = value;
    cout << "Push " << value << " → stack: [";
    for (int i = 0; i <= top; ++i) {
        cout << stack[i];
        if (i < top) cout << ", ";
    }
    cout << "]" << endl;
}

int pop() {
    if (top == -1) {
        cout << "Stack Underflow" << endl;
        return -1;
    }
    int popped = stack[top--];
    cout << "Pop " << popped << " → stack: [";
    for (int i = 0; i <= top; ++i) {
        cout << stack[i];
        if (i < top) cout << ", ";
    }
    cout << "]" << endl;
    return popped;
}

bool isValidUnloadSequence(int loaded[], int unloaded[], int n) {
    top = -1;

    int unloadIndex = 0;

    for (int i = 0; i < n; ++i) {
        push(loaded[i]);

        while (top >= 0 && stack[top] == unloaded[unloadIndex]) {
            pop();
            unloadIndex++;
        }
    }

    return (top == -1);
}

int main() {

    int n = 5;
    int loaded[n] ;
    int unloaded[n] ;

    cout << "Enter the load Secuence: " ;
    for(int i=0; i<n ; i++){
        cin >> loaded[i] ;
    }
    cout << "Enter the unload Secuence: " ;
    for(int i=0; i<n ; i++){
        cin >> unloaded[i] ;
    }

    cout << "\n--- Simulating Stack Operations ---\n\n";
    bool result = isValidUnloadSequence(loaded, unloaded, n);

    cout << "\nResult: ";
    if (result)
        cout << "Unloading sequence is VALID.\n";
    else
        cout << "Unloading sequence is NOT valid.\n";

    return 0;
}
