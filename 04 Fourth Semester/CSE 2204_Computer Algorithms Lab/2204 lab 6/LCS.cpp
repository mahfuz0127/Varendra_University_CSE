#include <bits/stdc++.h>
using namespace std;

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n = a.size(), m = b.size();

    cout << lcslength(a, b, n, m) << endl;

    return 0;
}

int lcslength(string a, string b,int n,int m){
    vector<vector<int>> matrix(n + 1, vector<int>(m + 1, 0));
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                matrix[i][j] = matrix[i-1][j-1] + 1;
            }else{
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
            }
        }
    }
    return matrix[n][m];
}

int lcs(string a, string b,int n,int m){