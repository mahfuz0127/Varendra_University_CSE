#include<bits/stdc++.h>
using namespace std;

int main(){
    vector<vector<int>> v;
    int n, m;
    cin >> n >> m;

    for(int i = 0; i < n; i++){
        vector<int> row;
        for(int j = 0; j < m; j++){
            int x;
            cin >> x;
            row.push_back(x);
        }
        v.push_back(row);
    }

    // Output the 2D vector
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }

    //delete element at (1,1)
    if(n > 1 && m > 1){
        v[1].erase(v[1].begin() + 1);
    }
    cout << "After deletion at (1,1):" << endl;
    for(int i = 0; i < v.size(); i++){
        for(int j = 0; j < v[i].size(); j++){
            cout << v[i][j] << " ";
        }
        cout << endl;
    }
    return 0;
}