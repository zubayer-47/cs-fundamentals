#include <bits/stdc++.h>
using namespace std;

const int MAX_N = 100005;

bool dp[MAX_N];

void make_it()
{
    int n;
    cin >> n;

    if (dp[n])
    {
        cout << "YES" << endl;
    }
    else
    {
        cout << "NO" << endl;
    }
}

int main()
{
    memset(dp, false, sizeof(dp));

    dp[1] = true;

    for (int i = 1; i < MAX_N; i++)
    {
        if (dp[i])
        {
            if (i + 3 < MAX_N)
            {
                dp[i + 3] = true;
            }

            if (i * 2 < MAX_N)
            {
                dp[i * 2] = true;
            }
        }
    }

    int t;
    cin >> t;
    while (t--)
    {
        make_it();
    }

    return 0;
}