#include <bits/stdc++.h>
using namespace std;

int main() {
    long long int n;
    cin >> n;

    vector<long long int> p(n, 0);

    for (int i = 0; i < n; i++)
    {
        long long int val;
        cin >> val;

        if (i==0) {
            p[i] = val;
            continue;
        }

        p[i] = p[i - 1] + val;
        
    }

    for (int i = p.size()-1; i >= 0; i--)
    {
        cout << p[i] << " ";
    }

    return 0;
}