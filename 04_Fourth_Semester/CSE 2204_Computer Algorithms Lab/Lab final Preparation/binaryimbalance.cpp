#include<bits/stdc++.h>
using namespace std;   

int main(){
    int t;
    cin >> t;
    while(t--){
        int n;
        cin >> n; // input size of string
        string s;
        cin >> s; // input binary string

        bool foundZero = false; // flag to indicate if '0' is found
        for(int i=0;i<n;i++){ // check for '0' in the string
            if(s[i]=='0'){ // if '0' is found
                foundZero = true; // set flag to true
                break; // no need to check further
            }
        }
        if(foundZero) cout << "YES"; // print YES if '0' is found
        else cout << "NO"; // print NO if '0' is not found
        cout << "\n";
    }
}
// The logic behind this code is that in a binary string, if there is at least one '0', the number of '0's can be larger than the number of '1's. 