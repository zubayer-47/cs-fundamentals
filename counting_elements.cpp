#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);
    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int count = 0;
    for (int i = 0; i < v.size(); i++)
    {
        auto found = find(v.begin(), v.end(), v[i] + 1);

        if (*found > 0 && *found != *v.end()) {
            count++;
        }

    }

    if (count) {
        cout << count << endl;
    } else {
        cout << 0 << endl;
    }

    return 0;
}