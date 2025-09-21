#include <bits/stdc++.h>
using namespace std;

void water()
{
    int n;
    cin >> n;

    vector<pair<long long, int>> h(n);
    for (int i = 0; i < n; i++)
    {
        cin >> h[i].first;
        h[i].second = i;
    }
    
    sort(h.rbegin(), h.rend());

    int index1 = h[0].second;
    int index2 = h[1].second;

    if (index1 > index2)
    {
        swap(index1, index2);
    }

    cout << index1 << " " << index2 << endl;
}

int main()
{
    int t;
    cin >> t;
    while (t--)
    {
        water();
    }
    return 0;
}
