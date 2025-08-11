#include <bits/stdc++.h>
using namespace std;

int main()
{
    int n;
    cin >> n;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    int val;
    cin >> val;

    v.push_back(val);

    int curr_ind = v.size() - 1;
    while (curr_ind != 0)
    {
        int p_ind = (curr_ind - 1) / 2;

        cout << v[p_ind] << endl;

        if (v[p_ind] > v[curr_ind])
        {
            swap(v[p_ind], v[curr_ind]);
        } else
            break;

        curr_ind = p_ind;
    }

    for (int l:v) {
        cout << l << " ";
    }

    // for (int i = 0; i < v.size(); i++)
    // {

    // }

    return 0;
}