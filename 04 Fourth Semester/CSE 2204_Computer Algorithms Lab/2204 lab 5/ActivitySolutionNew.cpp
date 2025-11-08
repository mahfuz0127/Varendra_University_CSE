#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<pair<int,int>> activities(n);
    cout << "enter the start and finish time (10 25): " << endl;
    for(int i =0;i<n;i++){
        cout << "Activity " << i+1 << ": ";
        cin >> activities[i].second >> activities[i].first; 
        //finish time stored in first for sorting purpose
    }

    sort(activities.begin(), activities.end());

    vector<int> selectedActivities;
    selectedActivities.push_back(0);

    int lastFinishTime = activities[0].first;

    for(int i=1;i<n;i++){
        if(activities[i].second >= lastFinishTime){
            selectedActivities.push_back(i);
            lastFinishTime = activities[i].first;
        }
    }

    cout << "Selected activities are: " << endl;
    for(int i=0;i<selectedActivities.size();i++){
        cout << "(" << activities[i].second << ", " << activities[i].first << ")";
    }

    return 0;
}