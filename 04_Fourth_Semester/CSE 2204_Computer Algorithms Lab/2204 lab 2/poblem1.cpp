/* Find the Square Root of a Number Given a 
non-negative integer n, find the largest integer 
x such that x2 ≤ n. You cannot use built-in 
square root functions.
Example: 
Input: n=10
Output: 3 */

#include <iostream>
using namespace std;

int sqrRoot(int n) {
    int low = 0, high = n, ans = 0;
    while(low <= high){
        int mid = low + (high - low) / 2;  //avoids this overflow by subtracting first, so the intermediate result never exceeds
        int sqr = mid * mid;
        if (sqr <= n){
            ans = mid;
            low = mid + 1;
        } else{
            high = mid - 1;
        }
    }
    return ans;
}

int main(){
    system("cls");

    int n;
    cout << "Enter a non-negative integer number n : ";
    cin >> n;
    if(n<0){
        cout << "Input must be a non-negative number." << endl;
        return 0;
    }
    int result = sqrRoot(n);
    cout << "Largest squar root integer bellow " << n << " is: " << result << endl;
    return 0;
}