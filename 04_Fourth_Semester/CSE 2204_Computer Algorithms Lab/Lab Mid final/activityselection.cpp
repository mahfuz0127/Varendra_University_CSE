#include <iostream>
using namespace std;

int main() {
    int i, j, n, last_selected;

    cout << "Enter the number of activities: ";
    cin >> n;

    int activity[n], start[n], finish[n];

    for (i = 0; i < n; i++) {
        cin >> activity[i] >> start[i] >> finish[i];
    }

    for (i = 0; i < n; i++) {
        for (j = i + 1; j < n; j++) {
            if (finish[i] > finish[j]) {
                swap(activity[i], activity[j]);
                swap(start[i], start[j]);
                swap(finish[i], finish[j]);
            }
        }
    }

    cout << "After sorting: " << endl;
    for (i = 0; i < n; i++) {
        cout << activity[i] << " " << start[i] << " " << finish[i] << endl;
    }

    last_selected = 0;
    cout << "The selected activities: " << activity[0] << " ";

    for (i = 1; i < n; i++) {
        if (start[i] >= finish[last_selected]) {
            cout << activity[i] << " ";
            last_selected = i;
        }
    }

    return 0;
}
