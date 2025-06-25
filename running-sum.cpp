#include <bits/stdc++.h>
using namespace std;

int sum(int total, int curr) {
    return total + curr;
}

int main() {
    int n;
    cin >> n;

    vector<int> a(n);

    for (int i = 0; i < n; i++)
    {
        int val;
        cin >> val;

        a[i] = sum(a[i - 1], val);
    }

    for (int value : a)
    {
        cout << value << " ";
    }

    return 0;
}