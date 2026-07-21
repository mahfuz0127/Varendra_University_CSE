#include <bits/stdc++.h>
using namespace std;

bool makeBeautiful(vector<int> &a) {
    sort(a.begin(), a.end());
    int total = accumulate(a.begin(), a.end(), 0);
    int prefix = 0;
    for (int i = 0; i < a.size(); i++) {
        prefix += a[i];
        if (prefix == total) return false;
    }
    return true;
}

int main() {
    vector<int> a = {3, 1, 2};
    if (makeBeautiful(a)) cout << "YES";
    else cout << "NO";
}
