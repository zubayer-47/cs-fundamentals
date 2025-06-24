#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        cin >> a[i];
    }

    int target;
    cin >> target;

    int l = 0, r = n - 1;
    bool hasFound = false;

    while (l <= r)
    {
        int mid = (l + r) / 2;

        if (a[mid] == target) {
            hasFound = true;
            break;
        }
        else if (a[mid] < target) {
            l = mid + 1;
        } else {
            cout << mid << endl;
            r = mid - 1;
        }
    }

    if (hasFound) {
        cout << "Found";
    } else {
        cout << "Not Found";
    }

    return 0;
}