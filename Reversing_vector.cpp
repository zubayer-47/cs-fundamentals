#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {

        // this one line is part of technique 2
        // cin >> v[i];

        // technique 1
        int value;
        cin >> value;

        if (value < 0) {
            v[i] = 2;
        } else if (value > 0) {
            v[i] = 1;
        } else {
            v[i] = value;
        }
    }

    // technique 2
    // for (int i = 0; i < v.size(); i++)
    // {
    //     if (v[i] < 0) {
    //         replace(v.begin(), v.end(), v[i], 2);
    //     } else if (v[i] > 0) {
    //         replace(v.begin(), v.end(), v[i], 1);
    //     }
    // }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}