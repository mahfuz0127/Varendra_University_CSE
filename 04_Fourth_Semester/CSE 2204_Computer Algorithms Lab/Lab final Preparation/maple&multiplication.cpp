#include <bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){
        int a,b;
        cin >> a >> b;
        if(a==b) cout << 0; // already equal
        else if(a%b==0 || b%a==0) cout << 1; // one is multiple of the other
        else cout << 2; // neither is multiple of the other
        cout << "\n";
    }
}
// The logic behind this code is that if a and b are equal, no operations are needed. If one number is a multiple of the other, only one operation is needed to make them equal by multiplying the smaller number. Otherwise, two operations are needed: first to make one number a multiple of the other, and then to make them equal.