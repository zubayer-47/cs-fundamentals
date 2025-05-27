#include <bits/stdc++.h>
using namespace std;

int main()
{
    int a,b,c;

    cin >> a >> b >> c;

    int maxN = max({a, b, c});
    int minN = min({a, b, c});

    cout << minN << " " << maxN << endl;

    return 0;
}