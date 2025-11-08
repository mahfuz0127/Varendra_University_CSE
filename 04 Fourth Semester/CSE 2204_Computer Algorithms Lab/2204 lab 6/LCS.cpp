#include <bits/stdc++.h>
using namespace std;

void lcs(string a, string b,int n,int m, vector<vector<int>>& matrix){
    string lcs_str = "";
    while(n > 0 && m > 0){
        if(a[n-1] == b[m-1]){
            lcs_str = a[n-1] + lcs_str;
            n--;
            m--;
        }else if(matrix[n-1][m] > matrix[n][m-1]){
            n--;
        }else{
            m--;
        }
    }
    cout << "LCS: " << lcs_str << endl;
}

int lcslength(string a, string b,int n,int m, vector<vector<int>>& matrix){
    for(int i=1;i<=n;i++){
        for(int j=1;j<=m;j++){
            if(a[i-1]==b[j-1]){
                matrix[i][j] = matrix[i-1][j-1] + 1;
            }else{
                matrix[i][j] = max(matrix[i-1][j], matrix[i][j-1]);
            }
        }
    }
    lcs(a, b, n, m, matrix);
    return matrix[n][m];
}

int main(){
    string a, b;
    getline(cin, a);
    getline(cin, b);

    int n = a.size(), m = b.size();
    vector<vector<int>> matrix(n + 1, vector<int>(m + 1, 0));

    cout << lcslength(a, b, n, m, matrix) << endl;

    return 0;
}