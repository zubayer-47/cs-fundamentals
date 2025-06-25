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

    int q;
    cin >> q;

    for (int i = 0; i < q; i++)
    {
        bool hasFound = false;
        int l = 0, r = a.size() - 1, val;

        cin >> val;

        while (l <= r)
        {
            int mid = (l + r) / 2;

            if (a[mid] == val) {
                hasFound = true;
                break;
            }
            else if (a[mid] < val)
            {
                l = mid + 1;
            }
            else
            {
                r = mid - 1;
            }
        }

        if (hasFound)
        {
            cout << "YES" << endl;
        }
        else
        {
            cout << "NO" << endl;
        }
    }

    return 0;
}