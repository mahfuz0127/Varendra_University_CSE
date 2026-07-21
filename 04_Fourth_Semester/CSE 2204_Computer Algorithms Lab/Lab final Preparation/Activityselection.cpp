#include<bits/stdc++.h>
using namespace std;

int main(){
    system("cls");
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    // Firstly we need to sort activities according to their finish time
    // pair<finish_time, start_time>
    vector<pair<int,int>> activities(n);
    cout << "enter the start and finish time (10 25): " << endl;
    for(int i =0;i<n;i++){
        cout << "Activity " << i+1 << ": ";
        cin >> activities[i].second >> activities[i].first; 
    }

    // Sorting activities based on finish time
    sort(activities.begin(), activities.end());

    // Selecting activities using greedy approach
    vector<int> selectedActivities;
    selectedActivities.push_back(0); //select first activity

    int lastFinishTime = activities[0].first; // finish time of first activity

    for(int i=1;i<n;i++){
        // Check if this activity can be selected
        if(activities[i].second >= lastFinishTime){
            selectedActivities.push_back(i); // select this activity
            lastFinishTime = activities[i].first; // update last finish time
        }
    }

    cout << "Selected activities are: " << endl;
    for(int i=0;i<selectedActivities.size();i++){
        cout << "(" << activities[i].second << ", " << activities[i].first << ")"; // print start and finish time
    }

    return 0;
}