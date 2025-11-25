#include <bits/stdc++.h>
using namespace std;

int lcslength(string &s1, string &s2, int m, int n, vector<vector<int>>&DP);
void realLCS(string s1, string s2, int m, int n, vector<vector<int>>&DP);

int main() {
    system("cls");
    // Input two strings
    string s1,s2;
    cout << "Enter the first string\t: " ;
    cin >> s1;
    cout << "Enter the second string\t: " ;
    cin >> s2;

    // Lengths of the strings
    int m = s1.length();
    int n = s2.length();

    vector<vector<int>>DP(m+1,vector<int>(n+1,0)); // DP matrix initialization by all 0s

    lcslength(s1, s2, m, n, DP); // Function call to calculate LCS length
    cout << "LCS Length : " << DP[m][n] << endl; // Print LCS length
    realLCS(s1, s2, m, n, DP);  // Function call to print the actual LCS
    return 0;
}

int lcslength(string &s1, string &s2, int m, int n, vector<vector<int>>&DP){
    cout << "The DP Matrix is : " << endl; // Print the DP matrix
    for(int i=0;i<=m;i++){
        for(int j=0;j<=n;j++){
            if(i != 0 && j != 0){   // Fill the DP matrix according to LCS rules
                if(s1[i-1]==s2[j-1]){ // characters match
                DP[i][j]=DP[i-1][j-1]+1; // diagonal value + 1
                }else{
                DP[i][j]=max(DP[i][j-1],DP[i-1][j]); // max of left and top values
                }
            }
            cout << DP[i][j] << " "; // Print current DP cell value
        }
        cout << endl; // New line after each row of DP matrix
    }
    return DP[m][n]; // Return the length of LCS
}

void realLCS(string s1, string s2, int m, int n, vector<vector<int>>&DP){
    string s3 =""; // to store the actual LCS
    while(n > 0 && m > 0){ // backtrack through the DP matrix
        if(s1[m-1] == s2[n-1]){ // characters match
            s3 = s1[m-1] + s3; // add character to LCS
            // move diagonally up-left in the DP matrix
            n--;
            m--;
        }else if(DP[m-1][n] > DP[m][n-1]){ // move in the direction of the larger value
            m--;
        }else{
            n--;
        }
    }
    cout << "the LCS is : " << s3 << endl; // Print the actual LCS
}
