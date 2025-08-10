#include<iostream>
#include<string>
#include<vector>
using namespace std;

int main() {
    string S1;
    string S2;

    cout << "Enter first string: ";
    getline(cin, S1);
    cout << "Enter second string: ";
    getline(cin, S2);

    int m = S1.length();
    int n = S2.length();

    vector<vector<int>> dp(m+1, vector<int>(n+1, 0));

    for (int i=1;i<=m;i++){
        for (int j=1;j <=n;j++) {
            if (S1[i-1]==S2[j-1]) dp[i][j]= dp[i-1][j-1] +1;
            else dp[i][j]= max(dp[i-1][j], dp[i][j-1]);
        }
    }

    cout << "LCS Length: " << dp[m][n] << endl;

    int index = dp[m][n];
    string lcs(index, ' ');
    
    int i =m, j= n;
    while (i >0 && j>0){
        if (S1[i-1]== S2[j-1]){
            lcs[index-1] =S1[i-1];
            i--; 
            j--; 
            index--;
        }
        else if (dp[i-1][j]>dp[i][j-1]) {
            i--;
        }
        else {
            j--;
        }
    }

    cout << "LCS: " << lcs << endl;
    return 0;
}
