#include <bits/stdc++.h>
using namespace std;

void activitySelection(vector<int> start, vector<int> finish, int n) {
    // Create a vector of pairs and sort by finish time
    vector<pair<int, int>> activities;
    for (int i = 0; i < n; i++) {
        activities.push_back({finish[i], start[i]});
    }
    sort(activities.begin(), activities.end());

    cout << "Selected activities (by index): ";

    // The first activity is always selected
    int lastSelected = 0;
    cout << "(" << activities[0].second << ", " << activities[0].first << ") ";

    // Iterate through remaining activities
    for (int i = 1; i < n; i++) {
        if (activities[i].second >= activities[lastSelected].first) {
            cout << "(" << activities[i].second << ", " << activities[i].first << ") ";
            lastSelected = i;
        }
    }
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of activities: ";
    cin >> n;

    vector<int> start(n), finish(n);
    cout << "Enter start times: ";
    for (int i = 0; i < n; i++) cin >> start[i];
    cout << "Enter finish times: ";
    for (int i = 0; i < n; i++) cin >> finish[i];

    activitySelection(start, finish, n);

    return 0;
}
