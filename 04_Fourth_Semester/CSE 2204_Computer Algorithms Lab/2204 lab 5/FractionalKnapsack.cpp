// #include <bits/stdc++.h>
// using namespace std;

// double fractionalKnapsack(int W, vector<int> val, vector<int> wt, int n) {
//     vector<pair<double, int>> ratio(n);
//     for (int i = 0; i < n; i++) {
//         ratio[i] = { (double)val[i] / wt[i], wt[i] };
//     }
//     sort(ratio.rbegin(), ratio.rend());

//     double totalValue = 0.0;
//     int currentWeight = 0;
    
//     for (int i = 0; i < n; i++) {
//         int idx = ratio[i].second;
        
//         if (currentWeight + wt[idx] <= W) {
//             totalValue += val[idx];
//             currentWeight += wt[idx];
//         } 
//         else {
//             totalValue += (W - currentWeight) * ratio[i].first;
//             break;
//         }
//     }
//     return totalValue;
// }

// int main() {
//     system("cls");
//     int n=3;
//     int w=50;

//     vector<int> val={60,100,120};
//     vector<int> wt={10,20,30};

//     cout<< "Max value in Knapsack = "<< fractionalKnapsack(w, val, wt,n) << endl;
//     return 0;
// }
#include <bits/stdc++.h>
using namespace std;

// Fractional Knapsack Function
double fractionalKnapsack(int W, vector<int> val, vector<int> wt, int n) {
    vector<pair<double, int>> ratio(n); // {value/weight, index}
    
    // Step 1: Calculate value/weight ratio
    for (int i = 0; i < n; i++) {
        ratio[i] = { (double)val[i] / wt[i], i };
    }
    
    // Step 2: Sort in descending order of ratio
    sort(ratio.rbegin(), ratio.rend());
    
    // Step 3: Initialize
    double totalValue = 0.0;
    int currentWeight = 0;
    
    // Step 4: Pick items one by one
    for (int i = 0; i < n; i++) {
        int idx = ratio[i].second;
        
        if (currentWeight + wt[idx] <= W) {
            totalValue += val[idx];
            currentWeight += wt[idx];
        } 
        else {
            totalValue += (W - currentWeight) * ratio[i].first;
            break;
        }
    }
    
    return totalValue;
}

// Main Function
int main() {
    system("cls"); // clear console (Windows)
    
    int n, W;
    cout << "Enter number of items: ";
    cin >> n;
    
    vector<int> val(n), wt(n);
    
    cout << "\nEnter the values of items:\n";
    for (int i = 0; i < n; i++) {
        cout << "Value of item " << i+1 << ": ";
        cin >> val[i];
    }
    
    cout << "\nEnter the weights of items:\n";
    for (int i = 0; i < n; i++) {
        cout << "Weight of item " << i+1 << ": ";
        cin >> wt[i];
    }
    
    cout << "\nEnter capacity of knapsack: ";
    cin >> W;

    // Show input arrays
    cout << "\n----------------------------------\n";
    cout << "Items Information:\n";
    cout << "Item\tValue\tWeight\tRatio\n";
    cout << "----------------------------------\n";
    for (int i = 0; i < n; i++) {
        cout << i+1 << "\t" << val[i] << "\t" << wt[i] 
             << "\t" << fixed << setprecision(2) << (double)val[i]/wt[i] << endl;
    }
    cout << "----------------------------------\n";

    // Call knapsack function
    double result = fractionalKnapsack(W, val, wt, n);
    
    cout << "\nMaximum value in Knapsack = " << fixed << setprecision(2) << result << endl;

    return 0;
}
