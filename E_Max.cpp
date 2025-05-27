#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;

    cin >> n;

    int x[n];

    for (int i = 0; i < n; i++)
    {
        cin >> x[i];
    }

    int maxN = INT_MIN;

    for (int i = 0; i < n; i++)
    {
        maxN = max(x[i], maxN);
    }

    cout << maxN << endl;

    return 0;
}