#include<bits/stdc++.h>
using namespace std;

int main(){
    int n,w;
    cout << "enter the item nember: " ;
    cin >> n;

    cout << "enter the capacity:" ;
    cin >> w;

    vector<int> value(n),weight(n);
    cout << "insert the items value and weight by this way ( 10 60 )___________" << endl;

    for(int i=0;i<n;i++){
        cin >> value[i] >> weight[i] ;
    }

    vector<pair<double , int>>ratio(n);
    for(int i=0;i<n;i++){
        ratio[i] = {(double)value[i]/weight[i],i};
    }
    sort(ratio.rbegin(), ratio.rend());

    cout << "index\t" << "value\t" << "weight\t" << "ratio\t" << endl;
    for(int i=0;i<n;i++){
        cout << ratio[i].second+1 << "\t" << value[ratio[i].second] << "\t" << weight[ratio[i].second] << "\t" << ratio[i].first << "\t" << endl;
    }

    double totalvalue = 0.0 ;
    int curentweight = 0 ;

    cout << "the items he can carry____________________________" << endl;
    cout << "index\t" << "value\t" << "weight\t" << "ratio\t" << endl;
    for(int i=0;i<n;i++){
        int idx = ratio[i].second ;
        if(curentweight+weight[idx]<=w){
            totalvalue += value[idx];
            curentweight += weight[idx];
            cout << ratio[i].second+1 << "\t" << value[idx] << "\t" << weight[idx] << "\t" << ratio[i].first << "\t" << endl;
        }else {
            totalvalue += ratio[idx].first*(w-curentweight);
            cout << ratio[i].second+1 << "\t" << value[idx] << "\t" << weight[idx] << "\t" << ratio[i].first << "\t" << endl;
            break;
        } 
    }

    cout << "the total value he earn: " << totalvalue << endl;

    return 0; 
}