#include <iostream>
using namespace std;

int main() {
    int t;
    cin >> t;
    int count_one[t];;
    int temp = 0;
    while(temp < t) {
        count_one[temp] = 0;
        int n;
        cin >> n;
        string s;
        getline(cin, s);

        int count_zero = 0;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                count_zero++;
            }
        }
        for(int i=0;i<count_zero;i++){
            if(s[i]=='1'){
                count_one[temp]++;
            }
        }
        temp++;
    }
    temp = 0;
    while(temp<t){
        cout << count_one[temp] << endl;
        temp++;
    }
    
    return 0;
}