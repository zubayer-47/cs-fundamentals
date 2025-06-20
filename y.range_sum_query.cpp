#include <bits/stdc++.h>
using namespace std;

int calculateSum(vector<int>::iterator begin, vector<int>::iterator end) {
    if (begin == end) {
        return *end;
    }


    int res = calculateSum(begin + 1, end);

    return *begin + res;
}

int main()
{
    int n, q;
    cin >> n >> q;

    vector<int> v(n);

    for (int i = 0; i < n; i++)
    {
        cin >> v[i];
    }

    for (int i = 0; i < q; i++)
    {
        int l, r, sum =0;

        cin >> l >> r;

        vector<int> p(v.begin() + l - 1, v.begin() + r);

        sum = calculateSum(p.begin(), p.end()-1);

        cout << sum << endl;
    }

    return 0;
}