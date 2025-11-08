#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n;
    cout << "enter the numaber of activities: ";
    cin >> n ;
    vector<int> value(n), weight(n);
    cout << "values:";
    for(int i=0; i<n; i++){
        cin >> value[i];
    }
    cout << "weights:";
    for(int i=0; i<n; i++){
        cin >> weight[i];
    }

    vector<pair<double, int>> ratio(n);
    for(int i=0; i<n; i++){
        ratio[i] = { (double)value[i]/weight[i], i };
    }
    sort(ratio.rbegin(), ratio.rend());

    int W;
    cout << "enter the maximum weight of knapsack: ";
    cin >> W;

    double totalValue = 0.0;
    int currentWeight = 0;

    for(int i=0; i<n; i++){
        int idx = ratio[i].second;
        if(currentWeight + weight[idx] <= W){
            totalValue += value[idx];
            currentWeight += weight[idx];
        }
        else{
            totalValue += (W - currentWeight) * ratio[i].first;
            break;
        }
    }

    cout << "Maximum value in Knapsack = " << totalValue << endl;

    return 0;
}