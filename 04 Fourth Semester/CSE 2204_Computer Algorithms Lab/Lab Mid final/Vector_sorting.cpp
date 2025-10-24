#include <bits/stdc++.h>
using namespace std;

int main() {
    vector<int> v;
    int n;
    cin >> n;

    for (int i = 0; i < n; i++) {
        int x;
        cin >> x;
        v.push_back(x);
    }

    // Output the vector
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sort the vector Ascendingly
    sort(v.begin(), v.end());
    cout << "Sorted Ascendingly:" << endl;
    for (int i = 0; i < v.size(); i++) {
        cout << v[i] << " ";
    }
    cout << endl;

    // Sort the vector Descendingly
    sort(v.begin(), v.end(), greater<int>());
    cout << "Sorted Descendingly:" << endl;
    for (int i = 0; i < v.size(); i++) {    
        cout << v[i] << " ";
    }
    cout << endl;

    return 0;
}