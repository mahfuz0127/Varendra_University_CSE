#include <bits/stdc++.h>
using namespace std;

int main() {
    system("cls");
    int t;
    cin >> t;
    while(t--){ // for each test case
        int n,e; // number of elements and current element
        cin >> n;
        int result=0; // to store the count of non-negative "0" elements 
        int tempo =0; // to store the count of negative "-1" elements
        for (int i=0;i<n;i++){
            cin >> e; // input element
            if(e==0) result++; // count non-negative elements
            else if(e== -1) tempo++; // count negative elements
        }
        if(tempo%2==1) result += 2; // if odd number of negatives, add 2 to result
        cout << result ;
    }
    return 0;
}
// The logic behind this code is that each "0" can neutralize one "-1" to make the product non-negative. If there is an odd number of "-1"s, one additional operation is needed to make the product non-negative, hence adding 2 to the result in that case.