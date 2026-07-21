#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    // Input number of items
    int n;
    cout << "enter the numaber of activities: ";
    cin >> n ;
    
    // Input values and weights of items
    vector<int> value(n), weight(n);
    cout << "values:";
    for(int i=0; i<n; i++){
        cin >> value[i];
    }
    cout << "weights:";
    for(int i=0; i<n; i++){
        cin >> weight[i];
    }

    // Calculate value to weight ratio and sort items by this ratio
    vector<pair<double, int>> ratio(n);
    for(int i=0; i<n; i++){
        ratio[i] = { (double)value[i]/weight[i], i }; // {ratio, index}
    }
    sort(ratio.rbegin(), ratio.rend());  // sort in descending order

    int W;
    cout << "enter the maximum weight of knapsack: ";
    cin >> W; // maximum weight of knapsack

    double totalValue = 0.0;
    int currentWeight = 0;

    // Select items to maximize value  
    for(int i=0; i<n; i++){
        int idx = ratio[i].second; // original index of the item
        if(currentWeight + weight[idx] <= W){ // if the item can be added completely
            totalValue += value[idx]; // add full value of the item
            currentWeight += weight[idx]; // update current weight
        }
        else{
            totalValue += (W - currentWeight) * ratio[i].first; // add fractional value of the item
            break;
        }
    }

    cout << "Maximum value in Knapsack = " << totalValue << endl;

    return 0;
}