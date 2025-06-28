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

    sort(a.begin(), a.end());

    bool hasDuplicate = false;

    for (int i = 0; i < a.size() - 1; i++)
    {
        if (a[i+1] == a[i]) {
            hasDuplicate = true;
            break;
        }
    }

    if (hasDuplicate) {
        cout << "YES";
    } else {
        cout << "NO";
    }

    return 0;
}