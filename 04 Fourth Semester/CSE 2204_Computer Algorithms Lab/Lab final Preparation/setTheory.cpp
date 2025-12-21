#include <iostream>
#include<set>
using namespace std;

int main() {
    //A set is always sorted in ascending order and contains only unique elements.
    //if we try to insert duplicate elements, they will be ignored.
    //it cant be accessed using index like arrays or vectors.
    //it can be traversed using iterators or range-based for loops.

    //initializing set
    set<int> A = {2,5,8,9,7,6,3,1,4};

    //display elements of set
    cout << "Elements of set A: ";
    for(auto x : A){
        cout << x << " ";
    }
    cout << endl;
    
    //inssert elements in set
    A.insert(10);
    A.emplace(11);

    cout << "Elements of set A after insertion: ";
    for(auto x : A){
        cout << x << " ";
    }
    cout << endl;

    //accessing elements
    cout << "First element: " << *A.begin() << endl;
    cout << "Last element: " << *A.rbegin() << endl;

    //accessing specific element
    auto it1 = next(A.begin(), 4); // 5th element (0-based index)
    cout << "5th element: " << *it1 << endl;

    //finding elements
    //A.erase(7);
    auto it2 = A.find(7);
    if(it2 != A.end()){
        cout << "Element 7 found in set A." << endl;
    } else {
        cout << "Element 7 not found in set A." << endl;
    }

    //traversing using for loop
    cout << "Traversing set A using for loop: ";
    for(auto it = A.begin(); it != A.end(); ++it){
        cout << *it << " ";
    }
    cout << endl;

    //deleting elements
    A.erase(3); // erase element with value 3
    cout << "Elements of set A after deleting 3: ";
    for(auto x : A){
        cout << x << " ";
    }
    cout << endl;

    //updating elements
    A.erase(5);
    A.insert(15);
    cout << "Elements of set A after updating 5 to 15: ";
    for(auto x : A){
        cout << x << " ";
    }
    cout << endl;

    return 0;
}