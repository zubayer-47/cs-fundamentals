#include <bits/stdc++.h>
using namespace std;

int main() {
    int n;
    cin >> n;

    vector<int> v(n);

    while (--n+1)
    {
        int value;
        cin >> value;

        v[n] = value;
    }
    
    for (int i = 0; i < v.size(); i++)
    {
        cout << v[i] << " ";
    }

    return 0;
}