#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<int> v;

    int n;
    cin>>n;

    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }

    cout << "Size: " << v.size() << endl;
    cout << "Capacity: " << v.capacity() << endl;

    v.insert(v.begin()+2, 100); // Insert 100 at index 2
    cout << "After insertion at index 2:" << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    v[3] = 200; // Update index 3 to 200
    cout << "After updating index 3 to 200:" << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    v.erase(v.begin()+1); // Delete element at index 1
    v.pop_back(); // Remove last element to maintain size
    cout << "After deletion at index 1:" << endl;
    for(int i : v){
        cout << i << " ";
    }
    cout << endl;

    cout << "Final Size: " << v.size() << endl;
    cout << "Final Capacity: " << v.capacity() << endl;

    return 0;
}