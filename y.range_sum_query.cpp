#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    vector<int> p(n);

    for (int i = 0; i < n; i++)
    {
        int sum = p[i - 1] + v[i];

        p[i] = sum;
    }

    for (int i = 0; i < q; i++)
    {
        int l, r;

        cin >> l >> r;

        int res = p[r - 1];

        if (l != 1) {
            res -= p[l - 2];
        }

        cout << res << endl;
    }

    return 0;
}