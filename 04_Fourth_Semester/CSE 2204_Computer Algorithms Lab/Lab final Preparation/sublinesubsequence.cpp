#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin >> t;
    while(t--){ // for each test case
        int x,n;
        cin >> n >> x; // input size of array and target sum
        if(n%2==0) cout << 0 ; // if n is even, print 0
        else cout << x ; // if n is odd, print x
    }
}
// in that case, we can always form pairs from n-1 elements, leaving one element unpaired. if n is odd, one element will always remain unpaired, so we can include x in the sum. and else if n is even, all elements can be paired, leaving no room for x in the sum.